# DATE: 05/08/2022, 08:10:46
# PROBLEM NAME: Compress the Video
# PROBLEM URL: https://www.codechef.com/problems/COMPRESSVD
# PROBLEM DIFFICULTY RATTING: 940
# STATUS: accepted
# TIME: 0.08
# MEMORY: 22.8M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split(" ")))
    if len(set(a)) == 1:
        print(1)
    else:
        count = sum([1 for i in range(len(a)-1) if a[i] == a[i+1]])
        print(len(a) - count)


