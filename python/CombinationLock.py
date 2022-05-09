t = int(input())
count = 0
n1 = input()
n2 = input()
for i in range(len(n1)):
    if abs(int(n1[i]) - int(n2[i])) > 5:
        count+= 10 - max(int(n1[i]),int(n2[i]))  + min(int(n1[i]),int(n2[i]))
    else:
        count+=abs(int(n1[i]) - int(n2[i]))
print(count)
            

