# DATE: 25/04/2023, 07:41:39
# PROBLEM NAME: Make them Zero
# PROBLEM URL: https://www.codechef.com/problems/MAKEZERO
# PROBLEM DIFFICULTY RATTING: 1320
# STATUS: wrong answer
# TIME: 0.05
# MEMORY: 13.5M

for _ in range(int(input())):
    n = int(input())
    print(bin(sum(set(map(int, input().split()))))[2:].count("1"))
    

