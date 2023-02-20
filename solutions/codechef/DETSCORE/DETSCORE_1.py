# DATE: 27/07/2022, 06:16:50
# PROBLEM NAME: Determine the Score
# PROBLEM URL: https://www.codechef.com/problems/DETSCORE
# PROBLEM DIFFICULTY RATTING: 267
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    x, n = map(int, input().split(" "))
    each_case_marks = x//10
    print(n*each_case_marks)

