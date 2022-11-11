# QUESTION URL: https://www.codechef.com/problems/GRPASSN
# STATUS: accepted
# TIME: 0.15
# MEMORY: 15.1M

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    p_set = set(p)
    
    for i in p_set:
        if p.count(i) % i != 0:
            print("NO")
            break
    
    else:
        print("YES")

