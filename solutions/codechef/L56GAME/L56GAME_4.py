# DATE: 10/10/2022, 07:18:36
# PROBLEM NAME: Chef and Game with Sequence
# PROBLEM URL: https://www.codechef.com/problems/L56GAME
# PROBLEM DIFFICULTY RATTING: 1051
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    i = 0
    while n > i and n != 1:
        x = a[i]
        for j in range(i + 1, len(a)):
            y = a[j]
            total = x + y
            if total % 2 == 0:
                a.remove(x)
                a.remove(y)
                a.insert(0, total)
                i -= 1
                n -= 1
                break

        i += 1

    print(n)



