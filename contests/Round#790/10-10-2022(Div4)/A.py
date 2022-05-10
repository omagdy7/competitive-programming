tt = int(input())
for i in range(tt):
    lsum = 0
    rsum = 0
    s = input()
    for i in range(3):
        lsum += int(s[i])
    for i in range(3):
        rsum += int(s[len(s) - 1 - i])
    if rsum == lsum:
        print("YES")
    else:
        print("NO")

