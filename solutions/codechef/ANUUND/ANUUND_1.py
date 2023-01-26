# QUESTION URL: https://www.codechef.com/problems/ANUUND
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

