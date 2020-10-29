#! /bin/bash

NUM1=3
NUM2=5
if [ "$NUM1" -gt "$NUM2" ]
then
    echo "$NUM1 is greater than $NUM2"
else
    echo "$NUM1 is less than $NUM2"
fi

FILE="test.txt"
if [ -f "$FILE" ]
then
    echo "$FILE is a file"
else 
    echo "$FILE is not a file"
fi  
