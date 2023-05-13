# DATE: 13/05/2023, 07:06:05
# PROBLEM NAME: DDMM or MMDD
# PROBLEM URL: https://www.codechef.com/problems/DDMMORMMDD
# PROBLEM DIFFICULTY RATTING: 992
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    dob = list(map(int, input().split("/")))
    
    if dob[0] <= dob[1] <= 12:
        print("BOTH")
    elif dob[0] <= 12:
        print("MM/DD/YYY")
    else:
        print("DD/MM/YYY")
    

