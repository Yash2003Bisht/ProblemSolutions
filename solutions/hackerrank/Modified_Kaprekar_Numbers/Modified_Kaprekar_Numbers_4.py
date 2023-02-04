# QUESTION URL: https://www.hackerrank.com/challenges/kaprekar-numbers/problem
# STATUS: Wrong Answer

import math

def iskaprekar( n):
    if n == 1 :
        return True
    
    sq_n = n * n
    count_digits = 1
    while not sq_n == 0 :
        count_digits = count_digits + 1
        sq_n = sq_n // 10
    
    sq_n = n*n
    r_digits = 0

    while r_digits < count_digits :
        r_digits += 1
        eq_parts = int(math.pow(10, r_digits))

        if eq_parts == n :
            continue

        total = sq_n//eq_parts + sq_n % eq_parts
        if total == n :
            return True

    return False
    
p = int(input())
q = int(input())
while p<q :
    if (iskaprekar(p)) :
        print (p, end=" ")
    p += 1
