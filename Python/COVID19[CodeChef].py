T = int(input())
while(T):
    N = int(input())
    arr = []
    arr = list(map(int, input().split()))
    
    count = 1
    min_ = 1
    max_ = 1
    flag = True
    i = 0
    while(i < N):
        while(i < N-1):
            if(arr[i+1] - arr[i] <= 2):
                count += 1
                i += 1
            else:
                break
        
        if(flag):
            min_ = max_ = count
            flag = False
        else:
            if count > max_:
                max_ = count
            if count < min_:
                min_ = count
        count = 1
        i += 1
    print(f"{min_} {max_}")
         
    T -= 1