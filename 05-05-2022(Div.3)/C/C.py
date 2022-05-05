#!/usr/bin/env python3

t = int(input())
while(t):
    t-=1
    s = input()
    one = 0
    zero = len(s) - 1
    for i in range(len(s)):
        if s[i] == '0':
            zero = i
            break
    for i in range(len(s)):
        if s[i] == '1':
            one = i
    print(zero - one + 1)

