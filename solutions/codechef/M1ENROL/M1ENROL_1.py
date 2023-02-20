# DATE: 29/07/2022, 06:55:53
# PROBLEM NAME: MATH1 Enrolment
# PROBLEM URL: https://www.codechef.com/problems/M1ENROL
# PROBLEM DIFFICULTY RATTING: 349
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

for _ in range(int(input())):
    x, y = map(int, input(" ").split(" "))
    print(max(0, y-x))

