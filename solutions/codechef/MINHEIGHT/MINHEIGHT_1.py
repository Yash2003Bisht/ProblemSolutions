# QUESTION URL: https://www.codechef.com/problems/MINHEIGHT
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print("YES" if x >= y else "NO")

