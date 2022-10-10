#!/usr/bin/python3
import csv

def read_csv(filepath):
	elements = []

	with open(filepath, 'r', encoding='utf-8') as fp:
		reader = csv.reader(fp)
		for row in reader:
			total = (float)(row[2]) * 0.3 + (float)(row[3]) * 0.35 + (float)(row[4]) * 0.34 + (float)(row[5]) 
			element = [row[0], row[1], row[2], row[3],row[4], row[5]]
			element.append(total)
			elements.append(element)
	return elements

filepath = 'students.csv'
elements = read_csv(filepath)
for element in elements:
	print("id:{}, name:{}, midterm:{}, final:{}, homework:{}, attendance:{}, total:{}".format(element[0],element[1],element[2],element[3],element[4],element[5],element[6]))
