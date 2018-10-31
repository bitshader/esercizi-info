#!/bin/bash
set -e

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

function execute_and_extract() {
    PROGRAM=$1
    PARAMS=$2
    ./$PROGRAM <<< $PARAMS | tail -c 1
}

# test 1
RETURN_VALUE="$(./eseguibile <<< '4 2 3 4 5' | tail -c 1 )"
EXPECTED_VALUE=2

test_equality $RETURN_VALUE $EXPECTED_VALUE

# test 2
RETURN_VALUE="$(./eseguibile <<< '5 5 5 5 5 5'| tail -c 1 )"
EXPECTED_VALUE=5

test_equality $RETURN_VALUE $EXPECTED_VALUE

# test 3
RETURN_VALUE=$(execute_and_extract eseguibile '1 2')
EXPECTED_VALUE=2

test_equality $RETURN_VALUE $EXPECTED_VALUE

rm -f eseguibile