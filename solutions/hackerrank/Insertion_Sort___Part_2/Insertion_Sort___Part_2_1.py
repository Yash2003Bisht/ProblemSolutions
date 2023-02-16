# QUESTION URL: https://www.hackerrank.com/challenges/insertionsort2/problem
# STATUS: Accepted

n = int(input())
lst = list(map(int, input().split()))

for i in range(1, n):
    key = lst[i]
    j = i-1
    while j >= 0 and lst[j] > key:
        lst[j+1] = lst[j]
        j = j-1
    lst[j+1] = key
    print(*lst)
