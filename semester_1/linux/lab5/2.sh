#! /bin/bash

echo "Enter the number"
read num

total_digits=${#num}
sum=0
for (( i=0 ; i<$total_digits ; i++))
do
    sum=$(( $sum + ${num:$i:1} ))
done

echo "Sum of digits is: $sum"