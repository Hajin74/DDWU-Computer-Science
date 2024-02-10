#!/usr/bin/python3

from_count_dict = dict()

with open("mbox-short.txt", "rt") as fp:
	for line in fp:
		 # 파일에 대해 for loop를 돌면 한 번에 한 줄씩 차례대로 읽혀짐
		if line.startswith("From: "):
			str_arr = line.split()
			if str_arr[1] not in from_count_dict:
				# From: 다음에 보낸 사람 이메일에 from_count_dict에 없으면
				from_count_dict[str_arr[1]] = 1
			else:
				from_count_dict[str_arr[1]] += 1

print(from_count_dict)
