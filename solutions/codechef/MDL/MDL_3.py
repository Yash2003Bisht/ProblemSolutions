# DATE: 29/05/2023, 07:34:29
# PROBLEM NAME: Medel
# PROBLEM URL: https://www.codechef.com/problems/MDL
# PROBLEM DIFFICULTY RATTING: 1139
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    i = 0
    
    while len(arr) != 2:
        sub_arr = arr[i:i+3]
        sub_arr.sort()
        arr.remove(sub_arr[1])    
    
    print(arr[0], arr[1])


