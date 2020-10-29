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
    echo "$FILE exists"
else 
    echo "$FILE does not exist"
fi  

read -p  "Are you a member ?" ANSWER
case "$ANSWER" in
    [yY] | [yY][eE][sS])
        echo "You are a member"
        ;;
    [nN] | [nN][o0])
        echo "You are not a memebr"
        ;;
    *)
        echo "PLese anter y or n"
        ;;
    esac

NAMES="Shrinish Vedu"
for NAME in $NAMES
    do 
        echo "Hello $NAME"
done

FILES=$(ls *.txt)
NEW="new"
for FILE in $FILES
    do 
        echo "renaming the file $FILE to new-$FILE"
        mv $FILE $NEW-$FILE
done