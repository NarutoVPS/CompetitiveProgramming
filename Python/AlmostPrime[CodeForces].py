'''
    A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. Find the amount of almost prime numbers which are between 1 and n, inclusive.

    Input
        Input contains one integer number n (1 ≤ n ≤ 3000).

    Output
        Output the amount of almost prime numbers between 1 and n, inclusive.
'''

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
