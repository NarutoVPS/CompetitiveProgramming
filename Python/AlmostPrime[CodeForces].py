def sieve():
    prime[0] = prime[1] = 0
    almostprime = [0]*3005

    for i in range(3001) :
        if prime[i] :
            for j in range(2*1, 3001) :
                prime[j] = 0
                almostprime[j] += 1
    return almostprime


almnostPrime = sieve()
ans = 0
n = int(input())
for i in range(n+1):
    if almnostPrime[i] == 2:
        ans += 1

print(ans)
