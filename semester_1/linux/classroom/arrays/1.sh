#! /bin/bash

arr=("Jayesh" "Shivang" "1" "rishabh" "Vipul" "Nishant")

element_length=${#arr[1]}
array_length=${#arr[@]}

echo $element_length
echo $array_length

search_result=$(echo "${arr[@]}" | grep -c "Jayesh")
echo $search_result
replaced_element=$(echo "${arr[@]/Shivang/SHIVANG}")
echo "${replaced_element[*]}"
unset arr[3]
echo ${arr[*]}
