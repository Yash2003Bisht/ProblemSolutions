# QUESTION URL: https://www.codechef.com/problems/JDELAY
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.3M

for _ in range(int(input())):
    n = int(input())
    counter = 0
    for _ in range(n):
        a, b = map(int, input().split(" "))
        if b-a > 5:
            counter += 1
    print(counter)

