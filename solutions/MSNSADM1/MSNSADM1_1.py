# QUESTION URL: https://www.codechef.com/problems/MSNSADM1
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    bt_scr = 0
    for i,j in zip(a,b):
        crr_scr = i*20 - j*10
        if crr_scr>bt_scr:
            bt_scr = crr_scr
    print(bt_scr)

