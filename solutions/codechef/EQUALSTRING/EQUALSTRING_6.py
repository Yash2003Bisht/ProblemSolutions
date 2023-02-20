# DATE: 09/11/2022, 06:29:25
# PROBLEM NAME: Equal Strings
# PROBLEM URL: https://www.codechef.com/problems/EQUALSTRING
# PROBLEM DIFFICULTY RATTING: 1092
# STATUS: accepted
# TIME: 0.11
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    lst = []
    count = 0

    for i in range(n):
        if b[i] != a[i] and b[i] not in lst:
            count += 1
            lst.append(b[i])
    
    print(count)

