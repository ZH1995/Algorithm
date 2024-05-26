# Problem 605

[Problem Description](./description/problem_605.md) | [Solution](./solutions/solution_605.cpp)

遍历数组，每个位置可以种花的条件是：前、后两个位置必须为空地，对于首、尾两个位置（下标为0、len-1）进行特判。

当n==0时，直接返回true。
