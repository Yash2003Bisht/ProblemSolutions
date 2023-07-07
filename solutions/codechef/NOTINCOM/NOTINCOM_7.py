# DATE: 07/07/2023, 08:05:15
# PROBLEM NAME: Nothing in Common
# PROBLEM URL: https://www.codechef.com/problems/NOTINCOM
# PROBLEM DIFFICULTY RATTING: 1386
# STATUS: partially accepted
# TIME: 0.21
# MEMORY: 9.8M

for _ in range(int(input())):
    a, b = map(int, input().split())
    alice = list(map(int, input().split()))
    berta = list(map(int, input().split()))
    count=  0

    for num in alice:
        if num in berta:
            count += 1
    
    print(count)


