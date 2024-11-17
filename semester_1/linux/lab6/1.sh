#! /bin/bash

echo "Enter the number"
read num

number_l=${#num}
middle=$(( $number_l / 2 ))
number_l=$(( $number_l - 1 ))

for (( i=0 ; i<$middle ; i++))
do
    if [[ ${num:$i:1} -eq ${num:$(($number_l - $i)):1} ]]
    then
        continue
    else
        echo "Number is not palindrome"
        exit
    fi
done

echo "Number is palindrome"