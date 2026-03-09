#!/bin/bash

num=20
if [ $num -eq 10 ]; then
    echo "num is 10"
elif test $num -eq 20; then
    echo "num is 20"
else
    echo "num is not 10 or 20"
fi