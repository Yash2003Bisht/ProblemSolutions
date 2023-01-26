# QUESTION URL: https://www.codechef.com/problems/BOMBTHEBASE
# STATUS: accepted
# TIME: 0.05
# MEMORY: 19.9M

from bisect import bisect

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    a = list(map(int, input().split(" ")))
    
    if  x > min(a):
        last_index = 0
        for index, house in enumerate(a):
            if house < x:
                last_index = index
        print(last_index+1)
    else:
        print(0)

