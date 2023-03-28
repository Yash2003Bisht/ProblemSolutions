# DATE: 27/03/2023, 08:05:24
# PROBLEM NAME: Reversal Sorting
# PROBLEM URL: https://www.codechef.com/problems/REVSORT
# PROBLEM DIFFICULTY RATTING: 1288
# STATUS: accepted
# TIME: 0.35
# MEMORY: 25.1M

for _ in range(int(input())):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    i = 0

    while (i < n-1):
        if (a[i] > a[i+1]):
            if (a[i] + a[i+1] <= x):
                a[i], a[i+1] = a[i+1], a[i]
            else:
                print("NO")
                break

        i += 1
    
    else:
        print("YES")


