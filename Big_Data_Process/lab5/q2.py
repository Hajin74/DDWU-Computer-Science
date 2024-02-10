#!/usr/bin/python3

a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
b = []

for i in a:
	b.append(i**2)

dic = { name: value for name, value in zip(a, b)}
print(dic[6])

