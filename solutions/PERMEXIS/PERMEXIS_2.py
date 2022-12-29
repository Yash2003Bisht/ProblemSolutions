# QUESTION URL: https://www.codechef.com/problems/PERMEXIS
# STATUS: accepted
# TIME: 0.05
# MEMORY: 17.6M

for _ in range(int(input())):
    input()
    a = set(map(int, input().split()))
    
    if max(a) - min(a) == len(a)-1:
        print("YES")
    else:
        print("NO")

