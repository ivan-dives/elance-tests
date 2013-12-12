#!/usr/bin/python

import sys

def foo(n):
    if n > 300:
    	yield 80 * (n - 300)
    	n = 300
    if n > 100:
    	yield 70 * (n - 100)
    	n = 100
    if n > 0:
    	yield 60 * n

for line in sys.stdin:
    print sum(foo(int(line)))

