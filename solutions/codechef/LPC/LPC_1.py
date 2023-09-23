# DATE: 23/09/2023, 08:17:19
# PROBLEM NAME: Lockpicking Chef
# PROBLEM URL: https://www.codechef.com/problems/LPC
# PROBLEM DIFFICULTY RATTING: 1311
# STATUS: accepted
# TIME: 0.29
# MEMORY: 9.4M

for _ in range(int(input())):
    n, m = map(int, input().split())
    s = input()
    k = input()

    def count_operations(i):
        total = 0

        for j in range(m):
            a, b = int(s[i+j]), int(k[j])
            x = abs(a - b)

            if x > 5:
                total += 10 - x
                continue

            total += x

        return total


    min_operation = count_operations(0)

    for i in range(1, n-m+1):
        count = count_operations(i)
        min_operation = min(min_operation, count)

    print(min_operation)


