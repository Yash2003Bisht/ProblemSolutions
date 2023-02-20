# DATE: 17/11/2022, 07:02:29
# PROBLEM NAME: Candies
# PROBLEM URL: https://www.codechef.com/problems/CNDY
# PROBLEM DIFFICULTY RATTING: 1018
# STATUS: accepted
# TIME: 0.06
# MEMORY: 10M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a_set = set(a)
    
    for i in a_set:
        if a.count(i) >= 3:
            print("No")
            break
    
    else:
        print("Yes")


