#!/bin/env/python3
x,n = map(int, input().split())
x = str(x)
x = x * n 
print(x)
def recursive_digit_sum(x):
    y = 0
    if len(x) == 1:
        return x;
    else:
        for i in x:
            y += int(i)
        print("y: ", y)
        return recursive_digit_sum(str(y))
print(recursive_digit_sum(x))
