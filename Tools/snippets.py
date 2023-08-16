import os
import re
import shutil

def extract_code_blocks(filepath):
    """
    Extract code blocks from a markdown file.
    
    Parameters:
    filepath (str): Path to the markdown file.

    Returns:
    list: A list of tuples where each tuple contains the language and the code block.
    """
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()

    pattern = re.compile(r'```(?P<language>\w+)?\n(?P<code>.*?)```', re.S)
    return pattern.findall(content)

def save_code_blocks_to_files(code_blocks, output_dir):
    """
    Save each code block to a separate file with the proper extension.
    
    Parameters:
    code_blocks (list): List of extracted code blocks.
    output_dir (str): Directory where code blocks will be saved.
    """
    for idx, (language, code) in enumerate(code_blocks):
        ext = language if language else 'txt'
        filename = f'code_block_{idx + 1}.{ext}'
        output_path = os.path.join(output_dir, filename)
        
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(code)

def update_extensions(input_dir, output_dir):
    """
    Update the extensions of files based on a pre-defined mapping.
    
    Parameters:
    input_dir (str): Source directory containing the files.
    output_dir (str): Destination directory to save the updated files.
    """
    ext_mapping = {
        '.bash': '.sh',
        '.console': '.sh',
        '.terminal': '.sh',
        '.hdl': '.v',
        '.java': '.js',
        '.javascript': '.js',
        '.python': '.py',
        '.mysql': '.sql',
        '.pseudocode': '.cpp'
    }

    # ... (rest of the function remains the same)

def process_markdown_files(root_dir, temp_dir, output_dir):
    """
    Process all markdown files in a directory and its subdirectories.
    
    Parameters:
    root_dir (str): Root directory containing the markdown files.
    temp_dir (str): Temporary directory to save the extracted code blocks.
    output_dir (str): Directory where the final code snippets will be saved.
    """
    for root, _, files in os.walk(root_dir):
        for file in files:
            if file.endswith('.md'):
                filepath = os.path.join(root, file)
                code_blocks = extract_code_blocks(filepath)
                save_code_blocks_to_files(code_blocks, temp_dir)

# Example usage
if __name__ == "__main__":
    root_directory = r'Z:\Brain 2.0'
    temp_directory = r'Z:\Brain 2.0\Computer Science\Snippets_Temp'
    output_directory = r'Z:\Brain 2.0\Computer Science\Snippets'
    
    if not os.path.exists(temp_directory):
        os.makedirs(temp_directory)
    if not os.path.exists(output_directory):
        os.makedirs(output_directory)
        
    process_markdown_files(root_directory, temp_directory, output_directory)
    update_extensions(temp_directory, output_directory)
    shutil.rmtree(temp_directory)  # Optionally remove the temporary directory
