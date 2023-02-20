# DATE: 30/07/2022, 07:05:48
# PROBLEM NAME: Pass the Exam
# PROBLEM URL: https://www.codechef.com/problems/PASSTHEEXAM
# PROBLEM DIFFICULTY RATTING: 424
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x, y = map(int, input().split(" "))
    print("pass" if sum([n,x,y]) >= 100 and min([n, x, y]) >= 10 else "fail")

