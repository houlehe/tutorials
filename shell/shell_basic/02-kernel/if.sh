#!/bin/bash

score=85
if [ $score -ge 90 ]; then
    echo "优秀"
fi

if [ $score -ge 60]
then
    echo "及格"
elsese
    echo "不及格"
fi

if [ $score -ge 90 ]; then
    echo "优秀"
else [ $score -ge 80 ]; then
    echo "良好"
else [ $score -ge 70 ]; then
    echo "中等"
elif [ $score -ge 60 ]; then
    echo "及格"
else
    echo "不及格"
fi