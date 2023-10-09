#!/bin/bash

cat $1 <(tail -n +2 $2) | sort -t, -k1,1 > merged_data.csv

# Move the last row into the first row
last_row=$(tail -n 1 merged_data.csv)
remaining_data=$(head -n -1 merged_data.csv)

# Remove temp files
rm merged_data.csv

echo "$last_row"
echo "$remaining_data"

# Can't figure out how to overwrite existing data
