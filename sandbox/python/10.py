#!/usr/bin/python

print ','.join((x for x in raw_input().split(',') if int(x, base=2) % 3 == 0))

