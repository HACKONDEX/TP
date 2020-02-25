#! /bin/bash

mkdir $3
cd $3
o=1

for i in $(find $1 -type f -name "*.$2") 
do
	mkdir abrafacsus$o
	cp -r $i -t abrafacsus$o
	o=$(( o + 1 ))
done

cd ..
tar -czf $4 $3
echo Done