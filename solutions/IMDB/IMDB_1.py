# QUESTION URL: https://www.codechef.com/problems/IMDB
# STATUS: accepted

for _ in range(int(input())):
    imdb = 0
    n,x = map(int, input().split())
    for _ in range(n):
        s, r = map(int, input().split())
        if x>=s and r>imdb:
            imdb = r
    print(imdb)

