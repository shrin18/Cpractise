#! /bin/bash

age=30
NAME="Brad"

if [ "$age" -lt 18 -o "$age" -lt 40 ]
then 
        echo "AGe is correct"
else
        echo "Age is not correct"
fi

if ["$NAME" == "Brad"]
then
    echo "Your friend is called Brad"
elif ["$NAME" == "Jack"]
    echo "Your friend is Jack"
fi
