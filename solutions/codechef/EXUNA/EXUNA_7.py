# DATE: 22/11/2022, 06:26:57
# PROBLEM NAME: Weird Modulo Problem 
# PROBLEM URL: https://www.codechef.com/problems/EXUNA
# PROBLEM DIFFICULTY RATTING: 1104
# STATUS: accepted
# TIME: 0.43
# MEMORY: 84.6M

for _ in range(int(input())):
    n = input()
    a = list(map(int, input().split()))
    print(min(a) % max(a))

