#! /bin/bash

echo "Enter the number"
read num

number_of_digits=${#num}

sum=0
for (( i = 0 ; i<$number_of_digits ; i++))
do
sum_t=$(( ${num:$i:1} ** $number_of_digits ))
sum=$(( $sum + $sum_t ))
done

if [[ $sum -eq $num ]]
then
echo "Number is Armstrong"
else
echo "Number is not Armstrong"
fi