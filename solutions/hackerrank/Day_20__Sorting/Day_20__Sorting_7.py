# QUESTION URL: https://www.hackerrank.com/challenges/30-sorting/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    # Write your code here
    counter = 0
    for _ in a:
        for i in range(n+1):
            try:
                if a[i] > a[i+1]:
                    digit = a.pop(i+1)
                    a.insert(i, digit)
                    counter += 1
            except IndexError:
                continue

    print(f"Array is sorted in {counter} swaps.")
    print(f"First Element: {a[0]}")
    print(f"Last Element: {a[len(a)-1]}")

    
