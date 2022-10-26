# QUESTION URL: https://www.codechef.com/problems/BESTOFTWO

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    if x > y:
        print(x)
    else:
        print(y)

