t = int(input())

for i in range(t):
    n, x = input().split()
    n = int(n)
    x = int(x)
    if n != 1:
        print(((x * 2) ** (n - 1)) % 1000000007)
    else:
        print(x)
    
