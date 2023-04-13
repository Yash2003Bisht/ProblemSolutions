# DATE: 13/04/2023, 08:08:04
# PROBLEM NAME: Pintu and Fruits
# PROBLEM URL: https://www.codechef.com/problems/CHPINTU
# PROBLEM DIFFICULTY RATTING: 1313
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.6M

for _ in range(int(input())):
    n, m = map(int, input().split())
    lst1 = list(map(int, input().split()))
    lst2 = list(map(int, input().split()))
    counter = {}

    for i in lst1:
        counter[i] = 0

    for idx, i in enumerate(lst1):
        counter[i] += lst2[idx]
    
    print(min(counter.values()))


