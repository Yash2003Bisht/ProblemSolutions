# QUESTION URL: https://www.codechef.com/problems/DIVIDING
# STATUS: accepted
# TIME: 0.03
# MEMORY: 15.4M

n = int(input())
total_stamps = sum(map(int, input().split()))

if n*((n+1)/2) == total_stamps:
    print("YES")
else:
    print("NO")

