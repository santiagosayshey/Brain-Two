import os
import re

def convert_obsidian_image_links(file_path, new_file_path):
    """
    Convert Obsidian-style image links in a file to GitHub Markdown-style 
    and save to a new location.
    """
    with open(file_path, 'r', encoding='utf-8') as file:
        content = file.read()
        
        # Use regex to find the Obsidian image links, replace spaces with %20, 
        # and then convert the link format.
        def replace_link(match):
            image_name = match.group(1).replace(' ', '%20')
            return f'![{image_name}](/Images/{image_name})'
        
        content = re.sub(r'!\[\[(.*?)\]\]', replace_link, content)
        
    os.makedirs(os.path.dirname(new_file_path), exist_ok=True)
    
    with open(new_file_path, 'w', encoding='utf-8') as file:
        file.write(content)

def main(vault_directory, github_directory):
    """
    Iterate through all markdown files in the vault, convert image links, 
    and save to a corresponding directory in ./Github/.
    """
    # Walk through every file in the vault_directory
    for foldername, subfolders, filenames in os.walk(vault_directory):
        for filename in filenames:
            if filename.endswith('.md'):
                file_path = os.path.join(foldername, filename)
                
                # Construct the new path for the modified file
                relative_path = os.path.relpath(file_path, vault_directory)
                new_file_path = os.path.join(github_directory, relative_path)
                
                convert_obsidian_image_links(file_path, new_file_path)

if __name__ == "__main__":
    # Adjusting paths relative to the script's location in ./Tools/
    VAULT_PATH = '../'  # Root of your vault
    GITHUB_PATH = '../Github'
    main(VAULT_PATH, GITHUB_PATH)
