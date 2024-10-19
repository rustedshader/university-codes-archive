#! /bin/bash

echo "enter the number to check whether even or odd"
read a

if [[ $(($a%2)) == 0 ]]
then
echo "number is even"
else
echo "number is odd"
fi
