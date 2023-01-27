# QUESTION URL: https://www.hackerrank.com/challenges/find-angle/problem
# STATUS: Wrong Answer

# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
ab = int(input())
bc = int(input())
ac = math.sqrt(ab**2 + bc**2)
mbc = math.degrees(math.asin(ab/ac))
print(mbc)
mbc_lst = f'{mbc}'.split('.')

if int(mbc_lst[1][0:1]) >= 5:
    print(f'{int(mbc)+1}' + chr(176))
else:
    print(f'{int(mbc)}' + chr(176))

