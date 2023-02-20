# DATE: 03/08/2022, 04:36:35
# PROBLEM NAME: Puppy and Sum
# PROBLEM URL: https://www.codechef.com/problems/PPSUM
# PROBLEM DIFFICULTY RATTING: 961
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    print(sum(range(1, a*b+1)))

