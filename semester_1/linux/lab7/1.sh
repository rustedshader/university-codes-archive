#! /bin/bash

echo "Enter the filename"
read filename

if [ -f $filename ]
then
    echo "File exists"
    echo "Contents of file are: "
    cat $filename
else
    echo "File does not exist"
    echo "Creating file"
    touch $filename
fi