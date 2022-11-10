# QUESTION URL: https://www.codechef.com/problems/MXEVNSUB
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())

    if  (n*n+n)/2 % 2==0:
        print(n)
        
    else:
        print(n-1)


