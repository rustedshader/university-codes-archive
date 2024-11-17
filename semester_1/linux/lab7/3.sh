#! /bin/bash

echo "Enter the filename"
read filename

if [ -f $filename ]
then
    echo "File exists"
    echo "Lines of file are: $(wc -l $filename)"
    echo "Words of file are: $(wc -w $filename)"
    echo "Characters of file are: $(wc -m $filename)"
else
    echo "File does not exist"
fi