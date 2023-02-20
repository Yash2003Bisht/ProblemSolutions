# DATE: 30/11/2022, 06:20:08
# PROBLEM NAME: Sort the String
# PROBLEM URL: https://www.codechef.com/problems/SRTARR
# PROBLEM DIFFICULTY RATTING: 1112
# STATUS: accepted
# TIME: 1.09
# MEMORY: 10.3M

for _ in range(int(input())):
    n = int(input())
    s = input()
    count = 0

    for i in range(n-1):
        if s[i] == '1' and s[i+1] == '0':
            count += 1

    print(count)


