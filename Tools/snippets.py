import os
import re
import shutil
from collections import defaultdict


def extract_code_blocks(filepath):
    """
    Extract code blocks from a markdown file.
    
    Args:
        filepath (str): Path to the markdown file.
        
    Returns:
        list: A list of tuples, where each tuple contains the (language, code) pair for each code block.
    """
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
        
    pattern = re.compile(r'```(?P<language>\w+)?\n(?P<code>.*?)```', re.S)
    return pattern.findall(content)

def save_code_blocks_to_files(code_blocks, output_dir):
    """
    Save each code block to a separate file with the proper extension in the specified directory.
    
    Args:
        code_blocks (list): List of code blocks extracted from markdown files.
        output_dir (str): Directory where the extracted code snippets will be saved.
    """
    for idx, (language, code) in enumerate(code_blocks):
        ext = language if language else 'txt'
        filename = f'code_block_{idx + 1}.{ext}'
        output_path = os.path.join(output_dir, filename)
        
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(code)
            
        # Keep track of the language statistics
        language_stats[language] += 1

def update_extensions(input_dir, output_dir):
    """
    Update the extensions of code files based on a predefined mapping.
    
    Args:
        input_dir (str): The directory from which files will be moved and renamed.
        output_dir (str): The directory where the renamed files will be moved to.
    """
    print("Updating file extensions...")
    
    ext_mapping = {
        '.bash': '.sh',
        '.console': '.sh',
        '.terminal': '.sh',
        '.hdl': '.v',
        '.java': '.js',
        '.javascript': '.js',
        '.json': '.js',
        '.python': '.py',
        '.mysql': '.sql',
        '.pseudocode': '.cpp'
    }

    for filename in os.listdir(input_dir):
        filepath = os.path.join(input_dir, filename)
        file_base, file_ext = os.path.splitext(filename)
        
        new_ext = ext_mapping.get(file_ext, file_ext)
        new_filename = file_base + new_ext
        new_filepath = os.path.join(output_dir, new_filename)
        
        try:
            if os.path.exists(new_filepath):
                print(f'File {new_filename} already exists in the destination directory.')
            else:
                shutil.move(filepath, new_filepath)
        except Exception as e:
            print(f'Error renaming file {filename}: {e}')

def process_markdown_files(root_dir, temp_dir, output_dir):
    """
    Process all markdown files in a directory and its subdirectories.
    
    Args:
        root_dir (str): The root directory containing markdown files.
        temp_dir (str): Temporary directory for saving extracted code snippets.
        output_dir (str): Final directory where the renamed code snippets will be saved.
    """
    print("Analyzing the vault...")
    
    total_files = 0
    total_snippets = 0

    for root, _, files in os.walk(root_dir):
        for file in files:
            if file.endswith('.md'):
                total_files += 1
                filepath = os.path.join(root, file)
                code_blocks = extract_code_blocks(filepath)
                total_snippets += len(code_blocks)
                save_code_blocks_to_files(code_blocks, temp_dir)

    print(f"Processed {total_files} markdown files.")
    print(f"Found {total_snippets} code snippets.")
    
    print("Details:")
    print(f"  Root Directory: {root_dir}")
    print(f"  Temporary Directory: {temp_dir}")
    print(f"  Output Directory: {output_dir}")

def print_language_statistics():
    """
    Print the statistics of code snippets by programming language.
    """
    total_snippets = sum(language_stats.values())
    if total_snippets == 0:
        print("No code snippets found.")
        return
    
    print("Language Statistics:")
    for language, count in language_stats.items():
        percentage = (count / total_snippets) * 100
        print(f"  {language}: {count} snippets ({percentage:.2f}%)")

# Example usage
if __name__ == "__main__":
    root_directory = r'Z:\Brain 2.0'
    temp_directory = r'Z:\Brain 2.0\Computer Science\Snippets_Temp'
    output_directory = r'Z:\Brain 2.0\Computer Science\Snippets'

    # Initialize a dictionary to store code snippet statistics by programming language
    language_stats = defaultdict(int)

    if not os.path.exists(temp_directory):
        os.makedirs(temp_directory)
    if not os.path.exists(output_directory):
        os.makedirs(output_directory)

    print("Starting to process markdown files...")
    
    process_markdown_files(root_directory, temp_directory, output_directory)
    update_extensions(temp_directory, output_directory)

    print("Cleaning up temporary files...")
    shutil.rmtree(temp_directory)

    print("Process completed successfully.")
    
    print_language_statistics()
