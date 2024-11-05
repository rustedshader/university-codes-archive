#! /bin/bash

n=1
while [[ $n -le 5 ]]
do 
	echo "Hello $n"
	((n++))
done
