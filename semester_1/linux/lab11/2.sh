#! /bin/bash

echo "Enter the string"
read s

s_len=${#s}
s_middle=$((s_len/2))
s_len=$((s_len-1))
for (( i=0; i<$s_middle; i++ ))
do
    if [[ ${s:$i:1} == ${s:$(($s_len - $i)):1} ]]
    then
        continue
    else
        echo "String is not palindrome"
        exit
    fi
done

echo "String is palindrome"
