#!/bin/bash

# Default values
filename="source.txt"
size="25m"


# Read command line arguments
while getopts "s:" opt; do
  case $opt in
    s)
      size="${OPTARG}"
      ;;
    *)
      echo "Usage: $0 [-s size]"
      echo "Example: $0 -s 25m"
      exit 1
      ;;
  esac
done

# Convert the size argument to bytes
size_bytes=$(echo "${size}" | awk '/[0-9]/{mult=1} /[kK]/{mult=1024} /[mM]/{mult=1048576} /[gG]/{mult=1073741824} {printf "%.0f", $0*mult}')
  
# Create and populate the file
current_size=0
block_size=1048576 # 1MB
block="$(head -c $block_size /dev/zero | tr '\0' 'A')"

while (( current_size < size_bytes )); do
  remaining=$((size_bytes - current_size))
  if (( remaining < block_size )); then
    echo -n "${block:0:remaining}" >> "$filename"
  else
    echo -n "$block" >> "$filename"
  fi
  current_size=$((current_size + block_size))
done

echo "File '$filename' created with size ${size}"
