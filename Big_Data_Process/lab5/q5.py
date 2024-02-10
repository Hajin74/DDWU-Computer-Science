#!/usr/bin/python3

import json

total = 0	
with open('movie.json') as datafile:
	jsondata = json.load(datafile)

	salesAmt_list = list(jsondata['movie'])

	for item in salesAmt_list:
		total += int(item['salesAmt']) 

print("오늘 매출액은 총 %d 원" % total)
