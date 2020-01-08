# 977. Squares of a Sorted Array

abs比-1*快，因为abs是位运算，~(num-1)

# 241. Different Ways to Add Parentheses

switch case比 if else快，因为switch在编译的时候会有一个表，找到case后直接查表跳转，而if else需要计算跳转的行数，浪费了多余的时间

# 141. Linked List Cycle

采用双指针法，一个快指针，一个慢指针，看是否相遇来判断是否有环