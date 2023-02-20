# DATE: 12/10/2022, 06:46:12
# PROBLEM NAME: Single Operation Part 1
# PROBLEM URL: https://www.codechef.com/problems/SINGLEOP1
# PROBLEM DIFFICULTY RATTING: 1217
# STATUS: accepted
# TIME: 0.20
# MEMORY: 9.8M

for _ in range(int(input())):
    s = int(input())
    s_b = input()
    for i in range(1, s+1):
        if s_b[i-1] == '0':
            i -= 1
            break

    print(i)

