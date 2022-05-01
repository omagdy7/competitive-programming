#!/bin/python3
t = int(input())
for i in range(t):
    s = input()
    count = 0
    for j in range(len(s) - 1):
        # print(s[j] == s[j + 1])
        if s[j] == s[j + 1]:
            count += 1
    print(count)


