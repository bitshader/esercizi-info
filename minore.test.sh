#!/bin/bash
set -e

rm -f eseguibile
rm -f out

g++ -o eseguibile minore.cpp

./eseguibile <<< '4 2 3 4 5' > out
RETURN_VALUE="$(tail -c 1 out)"
EXPECTED_VALUE=2

if [ $RETURN_VALUE -eq $EXPECTED_VALUE ]
then 
    echo "ok"
else 
    echo "fail"
    echo -e "\tgot value: $RETURN_VALUE"
    echo -e "\texpected value: $EXPECTED_VALUE"
fi


./eseguibile <<< '5 5 5 5 5 5' > out
RETURN_VALUE="$(tail -c 1 out)"
EXPECTED_VALUE=5

if [ $RETURN_VALUE -eq $EXPECTED_VALUE ]
then 
    echo "ok"
else 
    echo "fail"
    echo -e "\tgot value: $RETURN_VALUE"
    echo -e "\texpected value: $EXPECTED_VALUE"
    exit -1;
fi
