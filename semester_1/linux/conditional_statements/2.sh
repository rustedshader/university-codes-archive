#! /bin/bash

echo "Enter the number 1"
read a
echo "Enter the number 2"
read b
echo "Enter the number 3"
read c

if [[ $a > $b  && $a > $c ]]
then
echo "a is greatest"
elif [[ $b > $c && $b > $a ]]
then
echo "b is greatest"
elif [[ $c > $a && $c > $b ]]
then
echo "c is greatest"
elif [[ $a == $b && $b == $c ]]
then
echo "all 3 are equal"
else
echo "2 greatest values please enter 3 distinct values"
fi
