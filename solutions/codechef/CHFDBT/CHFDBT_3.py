# DATE: 06/12/2022, 07:33:01
# PROBLEM NAME: Akash and Function
# PROBLEM URL: https://www.codechef.com/problems/CHFDBT
# PROBLEM DIFFICULTY RATTING: 1121
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    print(n//2 if n%2 == 0 else n//2 + 1)

