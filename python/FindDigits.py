#!/usr/bin/env python3


def find_digit(n):
    count = 0
    list = [int(i) for i in n]
    for i in range(len(n)):
        if list[i] == 0:
            continue
        if int(n) % list[i] == 0:
            count = count + 1
    return count

t = int(input())

while(t):
    t = t - 1;
    n = input()
    print(find_digit(n))


