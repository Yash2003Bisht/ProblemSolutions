# QUESTION URL: https://www.codechef.com/problems/CHNGIT
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    lst = list(map(int, input().split()))
    print(n - lst.count(max(lst, key=lst.count)))

