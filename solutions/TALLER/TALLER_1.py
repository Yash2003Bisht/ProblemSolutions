# QUESTION URL: https://www.codechef.com/problems/TALLER
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    if x > y:
        print("A")
    else:
        print("B")

