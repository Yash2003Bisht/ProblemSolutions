# QUESTION URL: https://www.hackerrank.com/challenges/standardize-mobile-number-using-decorators/problem
# STATUS: Accepted

def wrapper(f):
    def fun(l):
        f(["+91 " + number[-10:-5] + " " + number[-5:] for number in l])
    return fun

