#!/usr/bin/python3

import datetime

now = datetime.datetime.now()
birth = datetime.datetime.strptime("19940505", "%Y%m%d")
date_diff = now - birth

print(date_diff)
