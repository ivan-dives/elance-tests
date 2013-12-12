#!/usr/bin/python

def greatest_divisible(x):
    n = 10 ** x - 1
    return n - n % x

def greatest_divisible_cast(s):
    return str(int(greatest_divisible(int(s))))

print ','.join((greatest_divisible_cast(x) for x in raw_input().split(',')))

