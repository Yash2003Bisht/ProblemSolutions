# QUESTION URL: https://www.hackerrank.com/challenges/python-string-formatting/problem
# STATUS: Wrong Answer

def print_formatted(number):
    # your code goes here
    for i in range(1, number+1):
        print(f"{str(i).rjust(2, ' ')} {oct(i)[2:].rjust(2, ' ')} {hex(i)[2:].rjust(2, ' ')} {bin(i)[2:].rjust(2, ' ')}")

