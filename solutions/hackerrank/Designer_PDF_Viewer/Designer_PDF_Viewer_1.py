# QUESTION URL: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
# STATUS: Accepted

#!/bin/python3

import sys


h = [int(h_temp) for h_temp in input().strip().split(' ')]
word = input().strip()
print(len(word) * max(h[ord(l)-ord('a')] for l in word))
