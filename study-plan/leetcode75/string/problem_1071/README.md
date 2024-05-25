# Problem 1071

[Problem Description](./description/problem_1071.md) | [Solution](./solutions/solution_1071.cpp)


要理解为什么 str1 + str2 != str2 + str1 就可以说明不存在公共因子字符串，我们需要深入理解字符串重复和最大公约数字符串的概念。

## 原理解释

假设有一个字符串 X 是 str1 和 str2 的最大公约数字符串。这意味着：

str1 可以表示为 X 的某个重复次数：str1 = X * k1
str2 可以表示为 X 的某个重复次数：str2 = X * k2
这里，* 表示字符串重复。例如，如果 X = "AB"，那么 X * 3 = "ABABAB"。

## 拼接顺序的推理

如果 X 是 str1 和 str2 的公共因子字符串，则：

str1 是 X 的若干倍，所以 str1 + str2 也应该是 X 的若干倍。
str2 也是 X 的若干倍，所以 str2 + str1 也应该是 X 的若干倍。
换句话说，如果 X 是公共因子字符串，那么 str1 + str2 和 str2 + str1 拼接后的结果应该相同，因为它们都是由相同的基本单元 X 组成的。

## 反证法

假设 str1 + str2 != str2 + str1，那么：

如果 str1 和 str2 有公共因子字符串 X，那么它们的拼接顺序不应该影响最终结果，因为它们都是由相同的基本单元 X 组成的。
如果 str1 + str2 和 str2 + str1 不相等，那么说明 str1 和 str2 中不存在这样的公共因子字符串 X，否则拼接顺序不会改变结果。

## 例子解释

举个具体的例子：

str1 = "ABAB"
str2 = "AB"
如果我们假设 X = "AB" 是 str1 和 str2 的公共因子字符串：

str1 可以表示为 "AB" * 2
str2 可以表示为 "AB" * 1
此时：

str1 + str2 = "ABAB" + "AB" = "ABABAB"
str2 + str1 = "AB" + "ABAB" = "ABABAB"
两个拼接结果是相同的，所以 X = "AB" 是一个有效的公共因子字符串。

再举个反例：

str1 = "ABAB"
str2 = "BABA"
显然，它们没有公共因子字符串，因为：

str1 + str2 = "ABAB" + "BABA" = "ABABBABA"
str2 + str1 = "BABA" + "ABAB" = "BABAABAB"
两个拼接结果不同，所以 str1 和 str2 没有公共因子字符串。

## 结论

因此，通过判断 str1 + str2 是否等于 str2 + str1，我们可以快速确定 str1 和 str2 是否可能有公共因子字符串。如果不相等，那么肯定没有公共因子字符串；如果相等，再继续找最大公约数字符串。