#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 2xx" 1>&2
  exit 1
fi

if ! [[ "$1" =~ ^[1-9][0-9]{,2}$ ]]; then
  echo "Usage: $0 2xx (x=[0-9])" 1>&2
  exit 1
fi

dir_name=$1
template_file="template.cpp"
test_data_file="test_data.txt"

for c in a b c d e f g h
do
  mkdir -p $dir_name/$c
  cp -n $template_file $dir_name/$c/$c.cpp
  touch $dir_name/$c/$test_data_file
done

exit 0