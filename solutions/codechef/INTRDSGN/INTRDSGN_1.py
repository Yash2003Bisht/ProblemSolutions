# DATE: 22/07/2022, 06:27:46
# PROBLEM NAME: Interior Design
# PROBLEM URL: https://www.codechef.com/problems/INTRDSGN
# PROBLEM DIFFICULTY RATTING: 373
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(" "))
    total_rupee_1 = a + b
    total_rupee_2 = c  + d
    
    if total_rupee_1 > total_rupee_2:
        print(total_rupee_2)
    else:
        print(total_rupee_1)

