# QUESTION URL: https://www.codechef.com/problems/GOODSET
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())

    if n == 1:
        print(1)
    elif n == 2:
        print("1 2")
    else:
        print("1 2 4", end=" ")
        num = 4
        for _ in range(n-3):
            num += 3
            print(num, end=" ")

        print()


