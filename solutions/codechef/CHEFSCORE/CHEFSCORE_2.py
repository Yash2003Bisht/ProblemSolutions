# DATE: 02/11/2022, 07:26:11
# PROBLEM NAME: Test Score
# PROBLEM URL: https://www.codechef.com/problems/CHEFSCORE
# PROBLEM DIFFICULTY RATTING: 610
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    n,x,y = map(int,input().split())
    if(y/x == int(y/x)):
        print("YES")
    else:
        print("NO")
    
    

