# DATE: 01/09/2022, 06:40:32
# PROBLEM NAME: End Sorted
# PROBLEM URL: https://www.codechef.com/problems/ENDSORTED
# PROBLEM DIFFICULTY RATTING: 1049
# STATUS: wrong answer
# TIME: 0.08
# MEMORY: 24.9M

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    if p[0] == min(p) and p[n-1] == max(p):
        print(0)
    else:
        first = p.index(min(p))
        last = n - p.index(max(p)) - 1
        if first < last or last == 0:
            print(first+last)
        else:
            print(first+last-1)

