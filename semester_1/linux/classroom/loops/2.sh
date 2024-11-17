#! /bin/bash

n=1
while [[ $n -le 10 ]]
do 
	if [ $n == 6 ]
	then
		echo "Terminated"
		break
	fi
	echo "Position $n"
	((n++))
done
