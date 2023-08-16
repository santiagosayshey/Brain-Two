#!/bin/bash

# Sort the input files based on the name column
sort -t, -k1,1 $1 > data1_sorted.csv
sort -t, -k1,1 $2 > data2_sorted.csv

# Merge the sorted files using the join command
join -t, -1 1 -2 1 -a 1 -a 2 -e "-" -o 0,1.2,2.2 data1_sorted.csv data2_sorted.csv > merged_data.csv

# Move the last row into the first row
last_row=$(tail -n 1 merged_data.csv)
remaining_data=$(head -n -1 merged_data.csv)

# Remove temp files
rm data1_sorted.csv data2_sorted.csv
rm merged_data.csv

echo "$last_row"
echo "$remaining_data"
