# DATE: 09/11/2022, 06:51:03
# PROBLEM NAME: Equal Strings
# PROBLEM URL: https://www.codechef.com/problems/EQUALSTRING
# PROBLEM DIFFICULTY RATTING: 1092
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    b_set = {b[i] for i in range(n) if b[i] != a[i]}
    print(len(b_set))

