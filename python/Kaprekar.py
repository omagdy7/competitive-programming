#!/usr/bin/env python3
from math import ceil

p = int(input())
q = int(input())

def splitNum(n):
    sn = str(n)
    l = len(sn)
    d = int((l + 1) / 2)
    if l % 2 == 0:
        d = int(ceil(l / 2))
    if(len(sn[d:].lstrip('0')) != 0):
        return int(sn[0:l - d]) + int(sn[l-d:].lstrip('0'))

for i in range(p, q):
    if i == splitNum(i * i):
        print(i)


