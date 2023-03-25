
def prod(n):
    prod = 1
    while n > 0:
        prod *= n % 10
        n //= 10
    return prod


def main():
    mp = {}
    for i in range(1, 1001):
        mx = 0
        for j in range(1, i + 1):
            mx = max(mx, prod(j))
        mp[mx] = j
        print(i, mp[mx])
    


if __name__ == "__main__":
    main()


        



        
