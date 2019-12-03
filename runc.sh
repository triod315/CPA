#/usr/bin/bash

echo "File for compilation: $1"

gcc $1 -o out
./out
rm out
