# QUESTION URL: https://www.codechef.com/problems/TVDISC
# STATUS: accepted

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(" "))
    cost_a = a - c
    cost_b = b - d
    if cost_a < cost_b:
        print("First")
    elif cost_b < cost_a:
        print("Second")
    else:
        print("Any")

