def isKarpekar(num):
    d = len(str(num))
    square = str(num**2)
    if((int(square[:len(square)-d]) + int(square[len(square)-d:])) == num):
        return num
    return 0

p,q = map(int, input().split())

count = 0
for each in range(p, q+1):
    if 1<each<4:
        continue
    if each==1:
        print(1)
        count += 1
        continue
    result = isKarpekar(each)
    if(result):
        print(result)
        count += 1

if(count<1):
    print("INVALID RANGE")

