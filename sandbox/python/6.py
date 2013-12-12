#!/usr/bin/python

for i in xrange(4):
	cols, rows = [int(x) for x in raw_input().split(',')]
	print [range((c * rows + 1), ((c + 1) * rows + 1)) for c in xrange(cols)]

