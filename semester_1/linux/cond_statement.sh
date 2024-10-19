#! /bin/bash
echo "Enter the value of var 1"
read var1
echo "Enter the value of var2"
read var2
# -lt -> less than -le -> less than equal to 

if [ $var1 == $var2 ]
then
echo "$var1 is equal to $var2"
fi

if [ $var1 -gt $var2 ]
then 
echo "$var1 is greater than $var2"
fi

if [ $var1 -lt $var2 ]
then
echo "$var1 is less than $var2"
fi 
