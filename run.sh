#/usr/bin/bash

echo "File for compilation: $1"

g++ $1 -o out
./out
rm out
