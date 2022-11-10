# QUESTION URL: https://www.codechef.com/problems/CABS
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    if n < x:
        print("first")
    elif x < n:
        print("second")
    else:
        print("any")

