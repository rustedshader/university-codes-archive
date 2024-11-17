#! /bin/bash

echo "Enter the value of a: "
read a
echo "Enter the value of b: "
read b

if [ $a == $b ]
then
echo "$a is equal to $b"
else
echo "$a is not equal to $b"
fi
