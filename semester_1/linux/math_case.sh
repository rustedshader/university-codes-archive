#! /bin/bash

echo "1 for addition"
echo "2 for subraction"
echo "3 for division"
echo "4 for multiplication"

read k

echo "Enter the number 1"
read var1
echo "Enter the number 2"
read var2

case "$k" in 
"1") echo "Your Answer is: $((  $var1 + $var2 ))";;
"2") echo "Your Answer is: $((  $var1 - $var2 ))";;
"3") echo "Your Answer is: $((  $var1 / $var2 ))";;
"4") echo "Your Answer is: $((  $var1 * $var2 ))";; 
*)
echo "Invalid option selected"
esac
