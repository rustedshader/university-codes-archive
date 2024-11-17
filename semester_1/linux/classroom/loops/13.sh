#! /bin/bash

echo "Enter the number for which you want to check prime number of: "
read i
z=0
for ((k=2 ; k<$i ; k++))
do
	if [ $(( $i % $k )) == 0 ]
	then
		z+=1
	fi
done

if [ $z -eq 0 ]
then
	echo "Prime"
else
	echo "Not prime"
fi
