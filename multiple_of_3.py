
n = input()
k = len(n)
cnt = -1
s = 0
for i in range(0,k):
    s += int(n[i])
if(s % 3 == 0):
    print("0")
    exit()
else:
    for i in range(k):
        if((s-int(n[i]))%3 == 0):
            cnt += 1
            break

if (cnt == -1):
    print('-1')
else:
    print(cnt +1)