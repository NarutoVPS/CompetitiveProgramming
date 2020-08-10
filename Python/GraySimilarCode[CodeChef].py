n = int(input())
if n >= 130 :
    print("Yes")
    exit()

num = []
num = list(map(int, input().split()))

for i in range(n) :
    for j in range(i+1, n) :
        for k in range(j+1, n) :
            # d = num[i] ^ num[j] ^ num[k]
            # if d in num :
            #     print("Yes")
            #     exit()
            for l in range(k+1, n) :
                if num[i] ^ num[j] ^ num[k] ^ num[l] == 0 :
                    print("Yes")
                    exit()

print("No")