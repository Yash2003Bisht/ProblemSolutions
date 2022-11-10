# QUESTION URL: https://www.codechef.com/problems/IMDB
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

