#! /bin/bash

echo "Enter the number"
read num

for (( i=2 ; i<$num ; i++))
do
    if [[ $(($num % $i )) -eq 0 ]]
    then 
        echo "Number is not prime"
        exit
    fi 
done
echo "Number is prime"