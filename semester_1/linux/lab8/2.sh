#! /bin/bash

echo "Please enter string 1 "
read s1
echo "Please enter string 2 "
read s2

string_len1=${#s1}
string_len2=${#s2}
concatinated_string=$s1$s2

echo "Length of string 1 is: $string_len1"
echo "Length of string 2 is: $string_len2"
echo "Concatenated string is: $concatinated_string"

if [ "$s1" == "$s2" ]
then
    echo "Strings are equal"
else
    echo "Strings are not equal"
fi