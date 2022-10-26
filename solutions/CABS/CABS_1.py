# QUESTION URL: https://www.codechef.com/problems/CABS

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    if n < x:
        print("first")
    elif x < n:
        print("second")
    else:
        print("any")

