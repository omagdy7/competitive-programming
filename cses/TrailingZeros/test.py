#!/usr/bin/env python3

import sys

sys.set_int_max_str_digits(16000)

def fact(n):
    ret = 1
    for i in range(1, n + 1):
        ret *= i;
    return ret

def count_zeros(n):
    ln = len(str(n))
    return ln - len(str(n).rstrip('0'))

for i in range(1, 4001):
    tmp = fact(i)
    print(f"{i} : {count_zeros(tmp)} | {(i // 5) + (i // 25) + (i // 125)}")
