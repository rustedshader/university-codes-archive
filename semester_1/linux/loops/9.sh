#!/bin/bash

# Initialize the counter
n=0
# Iterate the loop for 5 times
while [ $n -le 5 ]
do
    # Increment the value of n by 1
    (( n++ ))
   
    # Check the value of n
    if [ $n == 3 ]
    then
        continue
    fi
    # Print the current value of n
    echo "Position: $n"
   
done
