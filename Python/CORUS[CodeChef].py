from collections import Counter
T = int(input())

while(T):
    N, Q = map(int, input().split())
    S = input()

    count = Counter(S)
    while(Q):
        C = int(input())
        
        pending = 0
        for key in count:
            if count[key] > C:
                pending += (count[key] - C)
        print(pending)

        Q -= 1
    T -= 1