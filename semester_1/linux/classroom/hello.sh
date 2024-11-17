#!/bin/bash
echo "Enter the First number"
read var1
echo "Enter the Second number"
read var2
var3=$(($var1+$var2))
echo "Your sum is $var3"
