# DATE: 14/09/2022, 06:02:16
# PROBLEM NAME: Motivation
# PROBLEM URL: https://www.codechef.com/problems/IMDB
# PROBLEM DIFFICULTY RATTING: 1098
# STATUS: accepted
# TIME: 0.45
# MEMORY: 9.6M

for _ in range(int(input())):
    imdb = 0
    n,x = map(int, input().split())
    for _ in range(n):
        s, r = map(int, input().split())
        if x>=s and r>imdb:
            imdb = r
    print(imdb)

