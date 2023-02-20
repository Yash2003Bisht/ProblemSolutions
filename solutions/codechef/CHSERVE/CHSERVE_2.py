# DATE: 21/11/2022, 07:00:09
# PROBLEM NAME: Chef and Serves
# PROBLEM URL: https://www.codechef.com/problems/CHSERVE
# PROBLEM DIFFICULTY RATTING: 1101
# STATUS: accepted
# TIME: 0.50
# MEMORY: 9.5M

for _ in range(int(input())):
    p1, p2, k = map(int, input().split())
    crr_serve_number = (p1+p2) // k
    
    if crr_serve_number % 2 == 0:
        print("CHEF")
    else:
        print("COOK")

