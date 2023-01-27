# QUESTION URL: https://www.hackerrank.com/challenges/incorrect-regex/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
for i in range(int(input())):
    s = input()
    try:
        re.findall(s, 'hello')
        print(True)
    except re.error:
        print(False)
