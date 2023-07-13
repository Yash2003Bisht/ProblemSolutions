# DATE: 13/07/2023, 08:21:41
# PROBLEM NAME: Find the Maximum Value
# PROBLEM URL: https://www.codechef.com/problems/LOSTMAX
# PROBLEM DIFFICULTY RATTING: 1392
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n = list(map(int, input().split()))
    n.remove(len(n)-1)
    print(max(n))


