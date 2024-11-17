#! /bin/bash

echo "Enter your age"
read age

if [ $age -lt 18 ]
then
    echo "You are not eligible to work"
else
    echo "You are eligible to work"
fi