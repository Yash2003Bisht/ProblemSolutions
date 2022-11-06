# QUESTION URL: https://www.codechef.com/problems/CHNGIT
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    lst = list(map(int, input().split()))
    print(n - lst.count(max(lst, key=lst.count)))

