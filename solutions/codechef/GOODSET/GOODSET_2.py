# DATE: 27/01/2023, 07:20:59
# PROBLEM NAME: A Good Set
# PROBLEM URL: https://www.codechef.com/problems/GOODSET
# PROBLEM DIFFICULTY RATTING: 1231
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    num = 1

    for _ in range(n):
        print(num, end=" ")
        num += 2

    print()


