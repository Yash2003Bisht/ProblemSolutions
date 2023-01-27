# QUESTION URL: https://www.hackerrank.com/challenges/python-mutations/problem
# STATUS: Accepted

def mutate_string(string, position, character):
    return string[:position] + character + string[position+1:]

