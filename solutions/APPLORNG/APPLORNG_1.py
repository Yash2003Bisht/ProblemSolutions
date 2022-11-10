# QUESTION URL: https://www.codechef.com/problems/APPLORNG
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

x = int(input())
a, b = map(int, input().split(" "))
print("YES" if x >= a+b else "NO")

