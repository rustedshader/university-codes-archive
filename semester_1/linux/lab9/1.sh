#! /bin/bash

echo "Enter the filename"
read filename
echo "Enter the prefix"
read prefix
echo "Enter the suffix"
read suffix


if [ -f $filename ]
then
    echo "File exists"
    echo "Contents of file are: "
    cat $filename
    echo "Renaming file to $prefix$filename$suffix"
    mv $filename $prefix$filename$suffix
else
    echo "File does not exist"
    echo "Creating file $prefix$filename$suffix"
    touch $prefix$filename$suffix
fi