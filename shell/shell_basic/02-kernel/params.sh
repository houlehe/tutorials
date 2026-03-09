#!/bin/bash

echo "脚本名称: $0"
echo "第一个参数: $1"
echo "第二个参数: $2"
echo "第三个参数: $3"
echo "所有参数个数: $#"
echo "所有参数列表: $@"
echo "所有参数字符串: $*"

for i in "$@"; do
    echo "[$i]"
done

for i in "$*"; do
    echo "[$i]"
done