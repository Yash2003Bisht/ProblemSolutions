# DATE: 28/02/2023, 07:53:26
# PROBLEM NAME: Distinct Binary Strings
# PROBLEM URL: https://www.codechef.com/problems/BINSTRING
# PROBLEM DIFFICULTY RATTING: 1262
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())
    s = input()
    sep_10 = s.count('10')
    sep_01 = s.count('01')
    
    print(sep_01 + sep_10 + 1)


