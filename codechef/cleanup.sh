#!/bin/sh

files=$(ls)

for file in files do
  tmp=$(echo $dir | sed 's/.cpp//')
  mkdir $tmp
  mv $file $tmp
  cd ..
done

