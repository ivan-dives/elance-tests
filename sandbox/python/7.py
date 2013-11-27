#!/usr/bin/python

answer = []
for rgb in [[int(r), int(g), int(b)] for r, g, b in [rgb.split('-') for rgb in raw_input().split(',')]]:
	if rgb == filter((lambda x: not x > 255), rgb):
		answer += ['#%02X%02X%02X' % tuple(rgb)]
	else:
		answer += ['INVALID']
print ','.join(answer)

