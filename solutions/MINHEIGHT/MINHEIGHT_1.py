# QUESTION URL: https://www.codechef.com/problems/MINHEIGHT
# STATUS: accepted

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print("YES" if x >= y else "NO")

