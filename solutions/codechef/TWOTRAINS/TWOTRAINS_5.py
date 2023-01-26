# QUESTION URL: https://www.codechef.com/problems/TWOTRAINS
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split(" ")))
    count = 0
    for i in range(len(p)-1):
        count = abs(count - abs(p[i] - p[i+1]))
    print(sum(p)+p[0]+count)


