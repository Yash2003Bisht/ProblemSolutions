# QUESTION URL: https://www.hackerrank.com/challenges/py-introduction-to-sets/problem
# STATUS: Accepted

def average(array):
    # your code goes here
    return f'{sum(set(array))/len(set(array)):.3f}'

