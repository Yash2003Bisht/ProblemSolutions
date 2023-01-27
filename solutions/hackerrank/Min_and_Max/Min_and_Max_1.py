# QUESTION URL: https://www.hackerrank.com/challenges/np-min-and-max/problem
# STATUS: Accepted

import numpy
n, m = map(int, input().split(" "))
lst = []
for _ in range(n):
    lst.append(list(map(int, input().split(" "))))
    
min_lst = numpy.min(lst, axis=1)
print(numpy.max(min_lst))
