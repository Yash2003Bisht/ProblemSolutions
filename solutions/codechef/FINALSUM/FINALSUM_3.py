# DATE: 27/10/2022, 06:21:29
# PROBLEM NAME: Final Sum
# PROBLEM URL: https://www.codechef.com/problems/FINALSUM
# PROBLEM DIFFICULTY RATTING: 1145
# STATUS: accepted
# TIME: 0.44
# MEMORY: 30.3M

for _ in range(int(input())):
    n, q = map(int, input().split())
    total = sum(map(int, input().split()))
    
    for _ in range(q):
        l, r = map(int, input().split())
        
        if ((r-l+1) % 2 != 0):
            total += 1
    
    print(total)
    

