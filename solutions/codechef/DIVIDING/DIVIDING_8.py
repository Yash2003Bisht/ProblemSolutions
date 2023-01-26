# QUESTION URL: https://www.codechef.com/problems/DIVIDING
# STATUS: accepted
# TIME: 0.03
# MEMORY: 15.4M

n = sum(range(1, int(input()) + 1))
total_stamps = sum(map(int, input().split()))

if n == total_stamps:
    print("YES")
else:
    print("NO")

