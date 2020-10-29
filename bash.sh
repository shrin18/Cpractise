#! /bin/bash

NUM1=3
NUM2=5
if [ "$NUM1" -gt "$NUM2" ]
then
    echo "$NUM1 is greater than $NUM2"
else
    echo "$NUM1 is less than $NUM2"
fi

read -p "Enter first string: " VAR1
read -p "Enter second string: " VAR2
if [[ "$VAR1" == "$VAR2" ]]
then
    echo "Equal"
else 
    echo "NOt equal"
fi

CAR1="Vedashri"
CAR2="Vedashri"
if [ "$CAR1" = "$CAR2" ]
then
    echo "$CAR1" is equal to "$CAR2"
else
    echo "$CAR1" is not equal to "$CAR2"
fi

FILE="test.txt"
if [ -f "$FILE" ]
then
    echo "$FILE exists"
else 
    echo "$FILE does not exist"
fi  

FILE="Test2.txt"
if [ -f "$FILE" ]
then
    echo "$FILE exists"
else 
    echo "$FILE does not exist"
fi

read -p "Are you going to go to the party ?" ANSWER
case "$ANSWER" in
    [nN] | [sS][tT][jJ])
        echo "Cool !"
        ;;
    [uU] | [vV][hH][nN])
        echo "Not so cool !"
        ;;
    *)
        echo "Please enter the letter required"
        ;;
    esac

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


mkdir Hello
#nano "Hey.txt"
touch "helloworld.txt"
echo "hello world" >> "helloWorld.txt"