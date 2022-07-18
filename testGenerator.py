#!/bin/env python3
from random import randint


testcases = randint(1, 100)
print(testcases)
for i in range(testcases):
    arr_n = randint(2, 10)
    print(arr_n)
    for j in range(arr_n):
        print(randint(1, 100), end=" ")
    print()
print()
