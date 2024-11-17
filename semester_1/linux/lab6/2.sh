#! /bin/bash

echo "Enter the larger number"
read num1
echo "Enter the smaller number 2"
read num2


if [[ $(( $num1 % $num2 )) -eq 0 ]]
then
    echo "LCM is $num1"
else
    echo "LCM is $(( $num1 * $num2 ))"
fi

while true
do
if [[ $(( $num1 % $num2 )) -eq 0 ]]
then
    echo "GCD is $num2"
    break
else
    temp=$num1
    num1=$num2
    num2=$(( $temp % $num2 ))
fi
done


