#! /bin/bash

echo "Enter the car name:"
read CARS

case "$CARS" in 
	"mercedes") echo "Headquarets - Affalterbach, Germany";;
	"audi") echo "Headquarets Ingolstadt, Germany";;
	"bmw") echo "Headquaters - Chennai,Tamil Nadu,India";;
*)
echo "This is an invalid choice"
esac
