# QUESTION URL: https://www.codechef.com/problems/TWOTRAINS

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split(" ")))
    count = 0
    for i in range(len(p)-1):
        if p[i] < p[i+1]:
            if len(p) > 2:
                count += p[i-1]-(p[i+1]-p[i])
            else:
                count += p[i+1]-p[i]

    print(sum(p)+p[0]+count)


