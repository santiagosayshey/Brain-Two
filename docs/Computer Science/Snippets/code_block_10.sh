echo ${array[@]}  # This will print: A B C D E F G
echo ${!array[@]}  # This will print: 0 1 2 3 4 5 6
echo ${#array[@]}  # This will print: 7
array+=(H)
echo ${array[@]}  # This will print: A B C D E F G H
echo ${array[@]:2:4}  # This will print: C D E F
