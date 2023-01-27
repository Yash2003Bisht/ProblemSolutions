# QUESTION URL: https://www.hackerrank.com/challenges/np-transpose-and-flatten/problem
# STATUS: Accepted

import numpy

n, m = map(int, input().split(" "))
lst = []
for row in range(n):
    lst.append(list(map(int, input().split(" "))))

my_array = numpy.array(lst)
print(numpy.transpose(my_array))
print(my_array.flatten())

