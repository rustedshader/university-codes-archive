#! /bin/bash

echo "Enter the filename"
read filename
echo "Enter the search string"
read s_string

if [ -f $filename ]
then
    echo "File exists"
    echo "Searching for string in file"
    if grep -q $s_string $filename
    then
        echo "String found"
        grep -n $s_string $filename
    else
        echo "String not found"
    fi
else
    echo "File does not exist"
fi