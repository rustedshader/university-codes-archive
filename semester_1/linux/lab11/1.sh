#! /bin/bash

echo "Enter the sentence"
read s

echo $s | sed 's/ /\n/g' 