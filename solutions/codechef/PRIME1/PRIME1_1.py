# DATE: 04/11/2022, 07:38:48
# PROBLEM NAME: Prime Generator
# PROBLEM URL: https://www.codechef.com/problems/PRIME1
# PROBLEM DIFFICULTY RATTING: 1069
# STATUS: accepted
# TIME: 9.63
# MEMORY: 9.6M

import sys

def is_prime(num):
    if num <= 1:
        return False
    elif num == 2:
        return True
    elif num > 2 and num % 2 == 0:
        return False
    for i in range(3, int(num ** 0.5) + 1, 2):
        if num % i == 0:
            return False
    return True
 
    
def get_ints():
    return map(int, sys.stdin.readline().strip().split())
 


for _ in range(int(sys.stdin.readline())):
    m, n = get_ints()
    for i in range(m, n + 1):
        if is_prime(i):
            sys.stdout.write(str(i)+'\n')
    sys.stdout.write('\n')


