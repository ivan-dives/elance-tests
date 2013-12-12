#!/usr/bin/python

balance = sum((int(money) * (1 if _class == 'D' else -1) for money, _class in (transaction.split('-') for transaction in raw_input().split(','))))
if balance > 5000:
    balance *= 1.05
print int(balance)

