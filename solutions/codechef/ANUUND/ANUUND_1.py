# DATE: 18/08/2022, 06:28:24
# PROBLEM NAME: Ups and Downs
# PROBLEM URL: https://www.codechef.com/problems/ANUUND
# PROBLEM DIFFICULTY RATTING: 1198
# STATUS: accepted
# TIME: 0.48
# MEMORY: 24.7M

for i in range(int(input())):
    n=int(input())
    a=sorted(map(int,input().split()))
    for i in range(n-1):
        if i%2!=0:
            a[i],a[i+1]=a[i+1],a[i]
    print(' '.join(map(str, a)))

