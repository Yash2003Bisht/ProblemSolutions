# DATE: 13/05/2023, 07:10:47
# PROBLEM NAME: DDMM or MMDD
# PROBLEM URL: https://www.codechef.com/problems/DDMMORMMDD
# PROBLEM DIFFICULTY RATTING: 992
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    dob = list(map(int, input().split("/")))
    
    if dob[0] <= 12 and dob[1] <= 12:
        print("BOTH")
    elif dob[0] <= 12:
        print("MM/DD/YYYY")
    else:
        print("DD/MM/YYYY")


