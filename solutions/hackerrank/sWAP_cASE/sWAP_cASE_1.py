# QUESTION URL: https://www.hackerrank.com/challenges/swap-case/problem
# STATUS: Accepted

def swap_case(s):
    new_s = ""
    for i in s:
        if i.islower():
            new_s += i.upper()
        else:
            new_s += i.lower()
    return new_s

