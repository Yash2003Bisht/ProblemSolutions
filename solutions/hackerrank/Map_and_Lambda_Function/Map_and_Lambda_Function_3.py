# QUESTION URL: https://www.hackerrank.com/challenges/map-and-lambda-expression/problem
# STATUS: Accepted

cube = lambda x: x**3# complete the lambda function 

def fibonacci(n):
    # return a list of fibonacci numbers
    lst = [0, 1, 1]
    a, b, c = 0, 1, 1
    for _ in range(n):
        a = b
        b = c
        c = a + b
        lst.append(c)
    return lst[:n]

