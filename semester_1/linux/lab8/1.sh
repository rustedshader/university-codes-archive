#! /bin/bash

echo "Enter the filename"
read filename

if [ -f $filename ]
then
    file_details=$(ls -l $filename)
    file_perm=${file_details:1:3}
    echo "File permissions are: $file_perm"
    if [ ${file_perm:0:1} == "r" ]
        then
        echo "Read permission is granted"
        else
        echo "Read permission is not granted"
        fi
        if [ ${file_perm:1:1} == "w" ]
        then
        echo "Write permission is granted"
        else
        echo "Write permission is not granted"
        fi
        if [ ${file_perm:2:1} == "x" ]
        then
        echo "Execute permission is granted"
        else
        echo "Execute permission is not granted"
    fi
else
echo
echo "File does not exist"
fi