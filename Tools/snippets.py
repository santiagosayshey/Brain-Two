import os
import re

def extract_code_blocks(filepath):
    """Extract code blocks from a markdown file."""
    with open(filepath, 'r') as f:
        content = f.read()

    # Regular expression pattern for finding code blocks
    pattern = re.compile(r'```(?P<language>\w+)?\n(?P<code>.*?)```', re.S)
    return pattern.findall(content)

def save_code_blocks_to_files(code_blocks, output_dir):
    """Save each code block to a separate file with the proper extension."""
    for idx, (language, code) in enumerate(code_blocks):
        # Default to .txt if no language is specified
        ext = language if language else 'txt'
        filename = f'code_block_{idx + 1}.{ext}'
        output_path = os.path.join(output_dir, filename)
        
        with open(output_path, 'w') as f:
            f.write(code)

def process_markdown_files(root_dir):
    """Process all markdown files in a directory and its subdirectories."""
    for root, _, files in os.walk(root_dir):
        for file in files:
            if file.endswith('.md'):
                filepath = os.path.join(root, file)
                code_blocks = extract_code_blocks(filepath)
                save_code_blocks_to_files(code_blocks, root)

# Example usage
if __name__ == "__main__":
    root_directory = './markdown_files' # specify the root directory containing your markdown files here
    process_markdown_files(root_directory)
