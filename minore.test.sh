#!/bin/bash
set -e

rm eseguibile
rm out
g++ -o eseguibile minore.cpp
./eseguibile <<< '4 2 3 4 5' > out
RETURN_VALUE="$(tail -c 1 out)"
EXPECTED_VALUE=8
if [ $RETURN_VALUE -eq $EXPECTED_VALUE ]
then 
    echo "ok"
    exit 0;
else 
    echo "fail"
    exit -1;
fi