import sys

for i in range((int(sys.argv[1]) // 2) + 1):
    print(i, int(sys.argv[1]) - i)
