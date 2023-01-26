# QUESTION URL: https://www.codechef.com/problems/CHEFSCORE
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    n,x,y = map(int,input().split())
    if(y/x == int(y/x)):
        print("YES")
    else:
        print("NO")
    
    

