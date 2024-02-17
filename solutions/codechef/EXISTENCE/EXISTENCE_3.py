# DATE: 16/02/2024, 09:20:56
# PROBLEM NAME: Existence
# PROBLEM URL: https://www.codechef.com/problems/EXISTENCE
# PROBLEM DIFFICULTY RATTING: 928
# STATUS: accepted
# TIME: 0.02
# MEMORY: 8.4M

for _ in range(int(input())):
    x, y = map(int, input().split())
    
    if x**4 + 4 * y**2 == 4 * x**2 * y:
        print("YES")
    else:
        print("NO")
    

