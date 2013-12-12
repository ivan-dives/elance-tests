#!/usr/bin/python

def convert(l):
	for rgb in ([int(r), int(g), int(b)] for r, g, b in (rgb.split('-') for rgb in l)):
		if rgb == filter((lambda x: not x > 255), rgb):
			yield '#%02X%02X%02X' % tuple(rgb)
		else:
			yield 'INVALID'

print ','.join(convert(raw_input().split(',')))

