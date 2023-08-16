import os
import re
import shutil

def extract_code_blocks(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()

    pattern = re.compile(r'```(?P<language>\w+)?\n(?P<code>.*?)```', re.S)
    return pattern.findall(content)

def save_code_blocks_to_files(code_blocks, output_dir):
    for idx, (language, code) in enumerate(code_blocks):
        ext = language if language else 'txt'
        filename = f'code_block_{idx + 1}.{ext}'
        output_path = os.path.join(output_dir, filename)
        
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(code)

def update_extensions(input_dir, output_dir):
    ext_mapping = {
        '.bash': '.sh',
        '.console': '.sh',
        '.hdl': '.v',
        '.java': '.js',
        '.javascript': '.js',
        '.python': '.py',
        '.sql': '.sql',
        '.pseudocode': '.cpp'
    }

    for filename in os.listdir(input_dir):
        filepath = os.path.join(input_dir, filename)
        file_base, file_ext = os.path.splitext(filename)
        
        new_ext = ext_mapping.get(file_ext, file_ext)
        new_filename = file_base + new_ext
        new_filepath = os.path.join(output_dir, new_filename)

        # Print old and new file names
        print(f'Renaming {filename} to {new_filename}')
        
        try:
            if os.path.exists(new_filepath):
                print(f'File {new_filename} already exists in the destination directory.')
                # Uncomment the following line to overwrite the existing file
                # os.remove(new_filepath)
            shutil.move(filepath, new_filepath)
        except Exception as e:
            print(f'Error renaming file {filename}: {e}')

def process_markdown_files(root_dir, temp_dir, output_dir):
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
