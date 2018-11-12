#!/bin/bash
set -e

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

# build program
EXEC=binary_exec
g++ -o $EXEC minore.cpp

# test 1
RETURN_VALUE="$(execute_and_extract $EXEC '4 2 3 4 5')"
test_equality $RETURN_VALUE 2

# test 2
RETURN_VALUE="$(execute_and_extract $EXEC '5 5 5 5 5 5')"
test_equality $RETURN_VALUE 5

# test 3
RETURN_VALUE=$(execute_and_extract $EXEC '1 0')
test_equality $RETURN_VALUE 0

# clean up
rm -f $EXEC