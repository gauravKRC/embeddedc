#!/bin/bash

# Check if an argument is provided
if [[ $# -eq 0 ]]; then
    echo "Usage: $0 <file_number>"
    exit 1
fi

# Get the file number from the argument
file_number=$1

# Construct the file name based on the file number
file_name="${file_number}.c"
executable_name="${file_number}"

# Check if the file exists
if [[ ! -f "$file_name" ]]; then
    echo "File $file_name not found."
    exit 1
fi

# Compile the file
gcc -o "$executable_name" "$file_name"

# Print a success message
echo "Compilation successful. Output file: $executable_name"

# Add the object file to .gitignore (optional)
if [[ -f .gitignore ]]; then
    echo "$executable_name" >> .gitignore
else
    echo "$executable_name" > .gitignore
fi
