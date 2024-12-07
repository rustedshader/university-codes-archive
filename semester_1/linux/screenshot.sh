#! /bin/bash


mkdir -p ./screenshots 
for f in $(find lab* -type f -name "*.sh");
do
        silicon $f --output ./screenshots/$(echo $f | sed 's/\//_/g').png
done
