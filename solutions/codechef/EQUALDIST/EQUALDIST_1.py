# QUESTION URL: https://www.codechef.com/problems/EQUALDIST
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    if (a+b) % 2 == 0:
        print("YES")
    else:
        print("NO")

