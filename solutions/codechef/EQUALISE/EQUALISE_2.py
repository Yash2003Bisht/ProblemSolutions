# QUESTION URL: https://www.codechef.com/problems/EQUALISE
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    if x == y:
        print("YES")
    else:
        if x % 2 == 0 and y % 2 == 0:
            print("NO")
        else:
            print("YES")


