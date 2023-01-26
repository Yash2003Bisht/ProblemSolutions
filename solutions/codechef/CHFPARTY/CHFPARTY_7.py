# QUESTION URL: https://www.codechef.com/problems/CHFPARTY
# STATUS: accepted
# TIME: 0.26
# MEMORY: 24.8M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    total = 0

    for i in a:
        if total >= i:
            total += 1
        else:
            break

    print(total)


