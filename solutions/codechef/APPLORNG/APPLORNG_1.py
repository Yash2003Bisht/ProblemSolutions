# DATE: 30/07/2022, 06:18:39
# PROBLEM NAME: Apples and Oranges
# PROBLEM URL: https://www.codechef.com/problems/APPLORNG
# PROBLEM DIFFICULTY RATTING: 355
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

x = int(input())
a, b = map(int, input().split(" "))
print("YES" if x >= a+b else "NO")

