# QUESTION URL: https://www.hackerrank.com/challenges/30-2d-arrays/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys
from functools import reduce



if __name__ == '__main__':

    arr = [[1, 1, 1, 0, 0, 0], [0, 1, 0, 0, 0, 0], [1, 1, 1, 0, 0, 0], [0, 0, 2, 4, 4, 0], [0, 0, 0, 2, 0, 0], [0, 0, 1, 2, 4, 0]]
    counter = 0
    a,b,c,d,e,f,g = 0,1,2,1,0,1,2
    new_lst = []
    final_lst = []
    for i in arr:
        if i == arr[counter]:
            try:
                for q in i:
                    new_lst.append([i[a], i[b], i[c], arr[counter+1][d], arr[counter+2][e], arr[counter+2][f], arr[counter+2][g]])
                    a += 1
                    b += 1
                    c += 1
                    d += 1
                    e += 1
                    f += 1
                    g += 1
            except IndexError:
                counter += 1
        a,b,c,d,e,f,g = 0,1,2,1,0,1,2
    for i in new_lst:
        final_lst.append(reduce(lambda x,y: x+y, i))

    print(max(final_lst))
