# QUESTION URL: https://www.hackerrank.com/challenges/python-string-formatting/problem
# STATUS: Wrong Answer

def print_formatted(number):
    # your code goes here
    value = len(bin(number)[2:])
    for i in range(1, number+1):
        print(f" {str(i).rjust(value-1, ' ')} {oct(i)[2:].rjust(value, ' ')} {hex(i)[2:].rjust(value, ' ')} {bin(i)[2:].rjust(value, ' ')}")

