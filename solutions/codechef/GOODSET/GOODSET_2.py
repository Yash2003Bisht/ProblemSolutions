# QUESTION URL: https://www.codechef.com/problems/GOODSET
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    num = 1

    for _ in range(n):
        print(num, end=" ")
        num += 2

    print()


