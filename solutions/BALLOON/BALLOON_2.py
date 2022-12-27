# QUESTION URL: https://www.codechef.com/problems/BALLOON
# STATUS: accepted
# TIME: 0.09
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    for i, x in enumerate(a[::-1]):
        if x <= 7:
            print(n-i)
            break


