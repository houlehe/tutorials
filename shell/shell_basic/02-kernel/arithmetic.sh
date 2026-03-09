#!/bin/bash

# 方法1: 推荐使用$(())
a=10
b=3
sum=$((a+b))
echo "${a} + ${b} = ${sum}"

# 支持的操作符: + - * / % **
echo "${a} - ${b} = $((a-b))"
echo "${a} * ${b} = $((a*b))"
echo "${a} / ${b} = $((a/b))"
echo "${a} % ${b} = $((a%b))"
echo "${a} ** ${b} = $((a**b))"

# 方法2: 使用let
let sum=a+b
echo "${a} + ${b} = ${sum}"
let "result = a * b + 5"
echo "result = ${result}"
let a++
echo "a = ${a}"