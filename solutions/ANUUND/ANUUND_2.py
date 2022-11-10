# QUESTION URL: https://www.codechef.com/problems/ANUUND
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

