#! /bin/bash
count = 10

if [ "$age" -gt 18 ] && [ "$age" -lt 40]
then
    echo "Age is correct"
else 
    echo "Age is not correct"
fi

if (($count < 9)) 
then
    echo "The condition is true"
elif (($count <= 9))
    echo "second condition is true"
else
    echo "THe condiion is false"
fi