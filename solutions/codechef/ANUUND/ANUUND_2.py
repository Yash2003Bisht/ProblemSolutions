# DATE: 18/08/2022, 06:25:43
# PROBLEM NAME: Ups and Downs
# PROBLEM URL: https://www.codechef.com/problems/ANUUND
# PROBLEM DIFFICULTY RATTING: 1198
# STATUS: accepted
# TIME: 0.54
# MEMORY: 27.1M

for i in range(int(input())):
    n=int(input())
    el=list(map(int,input().split()))
    l=sorted(el)
    for j in range(n-1):
        if j%2!=0:
            l[j],l[j+1]=l[j+1],l[j]
    for x in l:
        print(x,end=" ")
    print()

