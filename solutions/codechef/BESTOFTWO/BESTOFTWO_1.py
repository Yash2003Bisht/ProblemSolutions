# QUESTION URL: https://www.codechef.com/problems/BESTOFTWO
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    if x > y:
        print(x)
    else:
        print(y)

