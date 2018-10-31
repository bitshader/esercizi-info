#!/bin/bash
set -e

rm -f eseguibile

g++ -o eseguibile minore.cpp

function test_equality() {
    RETURN_VALUE=$1
    EXPECTED_VALUE=$2
    if [ $RETURN_VALUE -eq $EXPECTED_VALUE ]
    then 
        echo "ok"
    else 
        echo "fail"
        echo -e "\tgot value: $RETURN_VALUE"
        echo -e "\texpected value: $EXPECTED_VALUE"
    fi
}

# test 1
RETURN_VALUE="$(./eseguibile <<< '4 2 3 4 5' | tail -c 1 )"
EXPECTED_VALUE=2

test_equality $RETURN_VALUE $EXPECTED_VALUE

# test 2
RETURN_VALUE="$(./eseguibile <<< '5 5 5 5 5 5'| tail -c 1 out)"
EXPECTED_VALUE=5

test_equality $RETURN_VALUE $EXPECTED_VALUE
