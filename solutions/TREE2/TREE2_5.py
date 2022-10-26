# QUESTION URL: https://www.codechef.com/problems/TREE2

for _ in range(int(input())):
    n=int(input())
    l=set(map(int,input().split()))
    if 0 in l:
        l.remove(0)
    print(len(l))
    

