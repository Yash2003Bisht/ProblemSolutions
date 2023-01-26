# QUESTION URL: https://www.codechef.com/problems/MXEVNSUB
# STATUS: accepted
# TIME: 0.65
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())

    if sum(list(range(n+1))) % 2==0:
        print(n)
        
    else:
        print(n-1)


