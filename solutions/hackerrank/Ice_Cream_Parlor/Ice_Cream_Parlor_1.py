# QUESTION URL: https://www.hackerrank.com/challenges/icecream-parlor/problem
# STATUS: Accepted

t = int(input())
for _ in range(t):
    k = int(input())
    n = int(input())
    cost = list(map(int, input().split(" ")))
    flag = False
    for i in range(len(cost)):
        for j in range(i+1, len(cost)):
            if cost[i] + cost[j] == k:
                print(i+1, j+1)
                flag = True
                break
        if flag:
            break
