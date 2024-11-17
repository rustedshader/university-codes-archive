#! /bin/bash

echo "Enter the string"
read s

echo "Reversed string is: $(echo $s | rev)"