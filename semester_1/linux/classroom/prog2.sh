#! /bin/bash

var1=5
var2=10
var3=var1+var2

echo "$var1 $var2 $var3"
echo "$var1 $var2 var3"
echo "var1 var2 $var3"

var4=$var1+$var2
#var5=$($var1+$var2)
var6=$(($var1+$var2))
echo $var4
#echo $var5
echo $var6
