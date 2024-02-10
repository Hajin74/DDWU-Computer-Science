#!/usr/bin/python3

price = [10000, 8000, 7500, 12000, 25000]
sale_price = []

for i in price:
	sale_price.append(i * 0.8)

for i in sale_price:
	print(i, end = ", ") 
print()
