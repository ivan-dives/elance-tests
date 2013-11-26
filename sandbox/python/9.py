#!/usr/bin/python

import math

def _greatest_divisible(x):
	n = math.pow(10, x) - 1
	while n % x != 0:
		n -= 1
	return n

def greatest_divisible(s):
	return str(int(_greatest_divisible(int(s))))

print ','.join([greatest_divisible(x) for x in raw_input().split(',')])

