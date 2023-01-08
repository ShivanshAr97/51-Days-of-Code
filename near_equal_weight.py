# Your code here
def solve(n,l):
    m=abs(sum(l[0:1])-sum(l[1:]))
    for i in range (1,n):
        x=abs(sum(l[0:i])-sum(l[i:]))
        if(x<m):
            m=x
    return m
n=int(input())
l=list(map(int,input().split()))
print(solve(n,l))