#!/usr/bin/python3

fp = open("mbox-short.txt")
count = 0
total = 0

for line in fp: 
	if line.startswith("X-DSPAM-Confidence:"):
		start_index = line.find("0")
		num = float(line[start_index:])
		count += 1
		total += num

avg = total / count

print(avg) 


