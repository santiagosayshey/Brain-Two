import os
import re

def correct_extension(ext):
    """
    Correct the file extension based on the mapping.
    """
    # Mapping of incorrect extensions to the correct ones
    ext_mapping = {
        '.bash': '.sh',
        '.console': '.sh',
        '.hdl': '.v', # Verilog file extension
        '.java': '.js', # Changing to JavaScript as per your request
        '.javascript': '.js',
        '.python': '.py',
        '.sql': '.sql', # Keeping it as .sql as it is recognized by GitHub
        '.pseudocode': '.cpp'
    }
    # Return the corrected extension, or the original one if it's not in the mapping
    return ext_mapping.get(ext, ext)

def save_code_blocks_to_files(src_dir, dest_dir):
    """
    Extract code blocks from Markdown files in the source directory,
    and save them to files with proper extensions in the destination directory.
    """
    # Regular expression to match code blocks in Markdown
    code_block_pattern = re.compile(r'```(.+?)\n(.*?)```', re.S)
    
    # Iterate through the source directory and its subdirectories
    for subdir, _, files in os.walk(src_dir):
        for file in files:
            if file.endswith('.md'):
                # Open and read the content of the Markdown file
                with open(os.path.join(subdir, file), 'r', encoding='utf8') as md_file:
                    content = md_file.read()
                
                # Find all code blocks in the content
                code_blocks = code_block_pattern.findall(content)
                
                # Process each code block
                for i, (lang, code) in enumerate(code_blocks):
                    # Correct the file extension
                    lang = correct_extension('.' + lang.strip().lower())
                    
                    # Generate the output file name
                    output_filename = f"{file[:-3]}_{i + 1}{lang}"
                    
                    # Write the code block to the corresponding file
                    output_path = os.path.join(dest_dir, output_filename)
                    with open(output_path, 'w', encoding='utf8') as out_file:
                        out_file.write(code.strip())


# Example usage
if __name__ == "__main__":
    root_directory = r'Z:\Brain 2.0' # specify the root directory containing your markdown files here
    output_directory = r'Z:\Brain 2.0\Computer Science\Snippets' # specify the directory where you want to save the code snippets
    
    # Create the output directory if it does not exist
    if not os.path.exists(output_directory):
        os.makedirs(output_directory)
        
    process_markdown_files(root_directory, output_directory)
