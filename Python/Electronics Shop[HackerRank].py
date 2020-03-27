money, n_key, n_drives = map(int, input().split())
keyboard = list(map(int, input().split()))
drive = list(map(int, input().split()))

if (min(keyboard) + min(drive)) > money:
    print(-1)

else:
    ans = 0
    for x in keyboard:
        for y in drive:
            if (x+y > ans) and x+y <= money:
                ans = x+y
    print(ans)