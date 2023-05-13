# DATE: 13/05/2023, 07:09:03
# PROBLEM NAME: DDMM or MMDD
# PROBLEM URL: https://www.codechef.com/problems/DDMMORMMDD
# PROBLEM DIFFICULTY RATTING: 992
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    dob = list(map(int, input().split("/")))
    
    if dob[0] + dob[1] <= 24:
        print("BOTH")
    elif dob[0] <= 12:
        print("MM/DD/YYYY")
    else:
        print("DD/MM/YYYY")


