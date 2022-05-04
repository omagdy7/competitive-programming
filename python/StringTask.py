#!/usr/bin/env python3

s = input()
ans = ""
vowels = "aeouiy"

for ch in s:
    if ch.lower() in vowels:
        s = s.replace(ch, "")
for ch in s:
    ans += "." + ch.lower()

print(ans)

