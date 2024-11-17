#! /bin/bash

echo "Enter how many numbers you want"
read n


declare -a arr
for (( i=0; i<n; i++ ))
do
echo "Enter the number"
read num
arr[$i]=$num
done


for (( i=0 ; i<n ; i++ ))
do
    for (( j=0 ; j<n ; j++))
    do
        if [[ ${arr[$i]} -lt ${arr[$j]} ]]
        then
            temp=${arr[$i]}
            arr[$i]=${arr[$j]}
            arr[$j]=$temp
        fi
    done
done


echo "Your sorted array is: ${arr[@]}"
echo "Time complexity is of O(n^2)"