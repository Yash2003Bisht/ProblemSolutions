# QUESTION URL: https://www.hackerrank.com/challenges/caesar-cipher-1/problem
# STATUS: Accepted

import string
symbols_low = string.ascii_lowercase
symbols_up = string.ascii_uppercase

input()
s = input()
k = int(input())
res = ""
for c in s:
    if c.isupper():
        res += (symbols_up[(symbols_up.index(c)+k)%len(symbols_up)])
    elif c.islower():
        res += (symbols_low[(symbols_low.index(c)+k)%len(symbols_low)])
    else:
        res += c
print(res)    
