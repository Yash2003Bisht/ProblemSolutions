# DATE: 29/10/2022, 05:55:11
# PROBLEM NAME: Sorted Substrings
# PROBLEM URL: https://www.codechef.com/problems/SSUBSTR
# PROBLEM DIFFICULTY RATTING: 1310
# STATUS: accepted
# TIME: 0.13
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())
    s = input()
    total = 0
    
    for i in range(n-1):
        if s[i] == '1' and s[i+1] == '0':
            total += 1
    
    print(total)

