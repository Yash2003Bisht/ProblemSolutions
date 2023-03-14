# DATE: 13/03/2023, 07:57:22
# PROBLEM NAME: Copy-Paste
# PROBLEM URL: https://www.codechef.com/problems/RRCOPY
# PROBLEM DIFFICULTY RATTING: 1280
# STATUS: accepted
# TIME: 0.24
# MEMORY: 26M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    print(len(set(a)))


