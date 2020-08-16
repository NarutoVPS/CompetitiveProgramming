# import sys

# sys.stdin=open(r"../../CompetitiveProgramming/input.txt","r")
# sys.stdout=open(r"../../CompetitiveProgramming/output.txt","w")

n = int(input())

nums = map(int, input().split())

ans = 0
for each in nums:
    ans ^= each

print(ans)