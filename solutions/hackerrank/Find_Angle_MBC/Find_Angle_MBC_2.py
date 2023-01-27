# QUESTION URL: https://www.hackerrank.com/challenges/find-angle/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
ab = int(input())
bc = int(input())
mbc = math.degrees(math.atan(ab/bc))
print(f'{round(mbc)}' + chr(176))

