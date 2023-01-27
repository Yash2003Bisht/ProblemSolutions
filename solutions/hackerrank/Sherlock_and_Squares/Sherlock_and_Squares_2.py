# QUESTION URL: https://www.hackerrank.com/challenges/sherlock-and-squares/problem
# STATUS: Accepted

#!/usr/bin/env python

import sys


if __name__ == '__main__':
    T = int(sys.stdin.readline())
    
    for _ in range(T):
        A, B = list(map(int, sys.stdin.readline().split()))

        nA = int(A**0.5)
        nB = int(B**0.5)
        
        ans = int(B**0.5) - int(A**0.5)
        if nA**2 == A:
            ans += 1
        
        print(ans)
