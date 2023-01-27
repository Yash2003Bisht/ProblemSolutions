# QUESTION URL: https://www.hackerrank.com/challenges/floor-ceil-and-rint/problem
# STATUS: Accepted

import numpy as np
np.set_printoptions(sign=' ')
array = np.array(input().split(" "), dtype=float)
print(np.floor(array))
print(np.ceil(array))
print(np.rint(array))
