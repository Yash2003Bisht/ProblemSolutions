# QUESTION URL: https://www.hackerrank.com/challenges/polar-coordinates/problem
# STATUS: Accepted

from cmath import phase
# Enter your code here. Read input from STDIN. Print output to STDOUT
r =  input()
print(abs(complex(r)))
print(phase(complex(r)))
