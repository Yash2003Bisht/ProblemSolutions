# QUESTION URL: https://www.hackerrank.com/challenges/find-angle/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
print(f'{round(math.degrees(math.atan(int(input())/int(input()))))}' + chr(176))

