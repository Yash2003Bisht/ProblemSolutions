# QUESTION URL: https://www.codechef.com/problems/JDELAY

for _ in range(int(input())):
    n = int(input())
    counter = 0
    for _ in range(n):
        a, b = map(int, input().split(" "))
        if b-a > 5:
            counter += 1
    print(counter)

