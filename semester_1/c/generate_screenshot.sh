#! /bin/bash

# For taking screenshots of code

for f in $(find experiment* -type f -name "*.c");
do
	silicon $f --output ./screenshots/$(echo $f | sed 's/\//_/g').png
done
