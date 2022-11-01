#!/usr/bin/python3
import sys

input_file = sys.argv[2]
output_file = sys.argv[3]
#print(input_file, output_file)

genre_count_dict = {} 
f = open(input_file, "rt")
for line in f:
	arr = line.split("::")
	genre_arr = arr[2].split("|")

	for i in genre_arr:
		i = i.strip()
		if i not in genre_count_dict:
			genre_count_dict[i] = 1
		else:
			genre_count_dict[i] += 1
f.close()
#print(genre_count_dict)

f = open(output_file, "wt")
keylist = genre_count_dict.keys()
for key in keylist:
	f.write("%s %s\n" % (key, genre_count_dict[key]))
f.close()
