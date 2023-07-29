def factorial(n):
    ans = 1
    for i in range(2, n + 1):
        ans *= i
    return ans

def solve():
    n = int(input())
    v = []
    for i in range(100):
        v.append(factorial(i))
    mx = 1
    for i in range(1, len(v)):
        for j in range(i + 1, len(v)):
            if n % (v[j] // v[i - 1]) == 0:
                print("-> ", j - i + 1)
                mx = max(mx, j - i + 1)
    print(mx)

if __name__ == "__main__":
    tt = int(input())
    for _ in range(tt):
        solve()
