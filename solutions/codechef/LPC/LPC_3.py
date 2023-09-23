# DATE: 23/09/2023, 08:04:49
# PROBLEM NAME: Lockpicking Chef
# PROBLEM URL: https://www.codechef.com/problems/LPC
# PROBLEM DIFFICULTY RATTING: 1311
# STATUS: accepted
# TIME: 0.42
# MEMORY: 9.6M

for _ in range(int(input())):
    n, m = map(int, input().split())
    s = input()
    k = input()

    min_operation = 100001

    for i in range(n-m+1):
        total = 0

        for j in range(m):
            a, b = int(s[i+j]), int(k[j])
            x = abs(a - b)

            if x <= 5:
                total += x
            else:
                total += 10 - max(a, b) + min(a,b)

        min_operation = min(min_operation, total)

    print(min_operation)


