#!usr/bin/python3
import sys
import calendar

input = sys.argv[1]
output = sys.argv[2]

uber_dict = {}
with open(input, "rt") as fp:
	for line in fp:
		region, date, vehicles, trips = line.split(",")
		trips = trips.strip()

		day_of_week = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']

		m, d, y = map(int, date.split('/'))
		day = calendar.weekday(y, m, d)
		day = day_of_week[day]

	#	print(day)

		if region not in uber_dict:
			uber_dict[region] = dict()
		if day not in uber_dict[region]:
			uber_dict[region][day] = dict()
			uber_dict[region][day]['vehicles'] = int(vehicles)
			uber_dict[region][day]['trips'] = int(trips)
		else:
			uber_dict[region][day]['vehicles'] += int(vehicles)
			uber_dict[region][day]['trips'] += int(trips)

#print(uber_dict)

with open(output, "wt") as fp:
	regionlist = uber_dict.keys()
	for region in regionlist:
		weeklist = uber_dict[region].keys()
		for week in weeklist:
			fp.write("%s,%s\t%d,%d\n" % (region, week, uber_dict[region][week]['vehicles'], uber_dict[region][week]['trips']))

