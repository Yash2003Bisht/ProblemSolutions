# QUESTION URL: https://www.hackerrank.com/challenges/reduce-function/problem
# STATUS: Accepted



def product(fracs):
    t = reduce(lambda x, y: x * y, fracs)
    return t.numerator, t.denominator

