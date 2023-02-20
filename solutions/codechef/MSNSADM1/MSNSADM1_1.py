# DATE: 15/09/2022, 08:02:06
# PROBLEM NAME: Football
# PROBLEM URL: https://www.codechef.com/problems/MSNSADM1
# PROBLEM DIFFICULTY RATTING: 1102
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

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

