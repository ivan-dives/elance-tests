#!/usr/bin/python

answer = []
for rgb in [[int(r), int(g), int(b)] for r, g, b in [rgb.split('-') for rgb in raw_input().split(',')]]:
	answer += ['#{0:02X}{1:02X}{2:02X}'.format(*rgb) if rgb == filter((lambda x: not x > 255), rgb) else 'INVALID']
print ','.join(answer)

