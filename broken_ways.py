# Your code here
import sys
from collections import defaultdict

N, M = map(int, input().split())
mod = 1000000007
hs = set()
for i in range(M):
    hs.add(int(input()))
dp = defaultdict(lambda: 0)
dp[0] = 1
if 1 not in hs:
    dp[1] = 1
for i in range(2, N+1):
    if i not in hs:
        dp[i] = (dp[i-1] + dp[i-2]) % mod
print(dp[N])