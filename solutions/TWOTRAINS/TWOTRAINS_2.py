# QUESTION URL: https://www.codechef.com/problems/TWOTRAINS

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split(" ")))
    print(sum(p)+max(p))

