#!/usr/bin/python

import math

def get_quantity(x):
	return round(math.sqrt(2 * 50 * x / 30))

def get_quantity_cast(s):
	return str(int(get_quantity(int(s))))

print ','.join((get_quantity_cast(d) for d in raw_input().split(',')))

