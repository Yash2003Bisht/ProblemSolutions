# QUESTION URL: https://www.codechef.com/problems/FINALSUM

for _ in range(int(input())):
    n, q = map(int, input().split())
    total = sum(map(int, input().split()))
    
    for _ in range(q):
        l, r = map(int, input().split())
        
        if ((r-l+1) % 2 != 0):
            total += 1
    
    print(total)
    

