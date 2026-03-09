#!/bin/bash

name="Alan"

# 双引号: 允许变量扩展
echo "hello, $name"

# 单引号: 不允许变量扩展
echo 'hello, $name'

# 反引号: 命令替换(执行命令并返回结果)
echo "Today is `date`"
# 现代写法: $(command)
echo "Today is $(date)"

# 转义字符
echo "Price: \$5.00"
echo "Today is \"$(date)\""