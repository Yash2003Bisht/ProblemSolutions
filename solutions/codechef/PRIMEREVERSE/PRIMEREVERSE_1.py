# DATE: 30/12/2022, 07:14:43
# PROBLEM NAME: Prime Reversal
# PROBLEM URL: https://www.codechef.com/problems/PRIMEREVERSE
# PROBLEM DIFFICULTY RATTING: 1053
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    
    if a.count('1') == b.count('1'):
        print("YES")
    else:
        print("NO")


