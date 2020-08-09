t = int(input())

while(t) :
    n = int(input())
    num = []
    fre = [0] * n
    fre[0] = 1

    sum = 0
    num = list(map(int, input().split()))
    for i in range(n):
        sum += num[i]
        sum = (sum + n) % n
        fre[sum] += 1

    ans = 0
    for each in fre:
        ans += each * (each - 1) / 2
    print(int(ans))
    t -= 1
