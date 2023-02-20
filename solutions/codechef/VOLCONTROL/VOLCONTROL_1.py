# DATE: 30/07/2022, 06:49:25
# PROBLEM NAME: Volume Control
# PROBLEM URL: https://www.codechef.com/problems/VOLCONTROL
# PROBLEM DIFFICULTY RATTING: 409
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print(abs(n-x))

