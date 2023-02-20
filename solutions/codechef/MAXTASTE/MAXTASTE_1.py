# DATE: 29/07/2022, 06:30:36
# PROBLEM NAME: Maximise the Tastiness
# PROBLEM URL: https://www.codechef.com/problems/MAXTASTE
# PROBLEM DIFFICULTY RATTING: 627
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(' '))
    print(max(a, b) + max(c, d))

