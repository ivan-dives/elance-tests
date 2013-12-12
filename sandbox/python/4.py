#!/usr/bin/python

import re

def is_good(_pass):
    if re.search('[a-z]', _pass) == None:
    	return False
    if re.search('[0-9]', _pass) == None:
    	return False
    if re.search('[A-Z]', _pass) == None:
    	return False
    if re.search('[*#+@]', _pass) == None:
    	return False
    if len(_pass) < 4 or len(_pass) > 6:
    	return False
    if ' ' in _pass:
    	return False
    return True

print ','.join(filter(is_good, raw_input().split(',')))

