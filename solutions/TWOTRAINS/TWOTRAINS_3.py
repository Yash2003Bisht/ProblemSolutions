# QUESTION URL: https://www.codechef.com/problems/TWOTRAINS

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split(" ")))
    count = [j-i for i, j in zip(p[:-1], p[1:])]
    print(sum(p)+p[0]+sum(count))

