# DATE: 20/10/2022, 06:54:47
# PROBLEM NAME: Change It
# PROBLEM URL: https://www.codechef.com/problems/CHNGIT
# PROBLEM DIFFICULTY RATTING: 1061
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    lst = list(map(int, input().split()))
    print(n - lst.count(max(lst, key=lst.count)))

