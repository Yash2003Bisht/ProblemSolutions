# DATE: 25/08/2022, 05:52:51
# PROBLEM NAME: Odd Pairs
# PROBLEM URL: https://www.codechef.com/problems/ODDPAIRS
# PROBLEM DIFFICULTY RATTING: 1044
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    print(2*((n+1)//2)*(n//2))


