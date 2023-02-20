# DATE: 01/11/2022, 06:13:55
# PROBLEM NAME: Binary String Cost
# PROBLEM URL: https://www.codechef.com/problems/BSCOST
# PROBLEM DIFFICULTY RATTING: 1069
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    n, x, y = input().split()
    s = input()
    
    if s.count('10') == 0 or s.count('01') == 0:
        print(0)
    elif x > y:
        print(y)
    else:
        print(x)
    
    

