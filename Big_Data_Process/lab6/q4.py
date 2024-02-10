#!/usr/bin/python3

try:
	num1, num2 = map(int, input().split())
	quotient = num1 / num2
	print(quotient)
except ZeroDivisionError:
	print("Division by Zero")

