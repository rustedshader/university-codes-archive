#! /bin/bash

CARS="abmw"

case "$CARS" in 
	"mercedes") echo "Headquarets Affatlbach, Germany";;
	"audi") echo "Headquarets Ingolstatdt, Germany";;
	"bmw") echo "Headquaters  Chennai Tamil Nadu India";;
*)
echo "This is an invalid choice"
esac
