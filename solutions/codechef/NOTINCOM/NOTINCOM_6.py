# DATE: 07/07/2023, 08:05:51
# PROBLEM NAME: Nothing in Common
# PROBLEM URL: https://www.codechef.com/problems/NOTINCOM
# PROBLEM DIFFICULTY RATTING: 1386
# STATUS: accepted
# TIME: 0.26
# MEMORY: 48.6M

for _ in range(int(input())):
    a, b = map(int, input().split())
    alice = list(map(int, input().split()))
    berta = list(map(int, input().split()))
    diff = set(alice).difference(berta)
    print(a - len(diff))


