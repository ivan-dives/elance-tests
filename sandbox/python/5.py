#!/usr/bin/python

import math

print ','.join([str(int(math.sqrt((2*50*int(d))/30))) for d in raw_input().split(',')])

