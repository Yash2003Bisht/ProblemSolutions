# DATE: 02/11/2022, 06:23:29
# PROBLEM NAME: Easy Permutation
# PROBLEM URL: https://www.codechef.com/problems/EASYPERM
# PROBLEM DIFFICULTY RATTING: 1057
# STATUS: accepted
# TIME: 0.19
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    for i in range(n, 0, -1):
        print(i, end=" ")
    
    print() # for new line

