# QUESTION URL: https://www.hackerrank.com/challenges/re-start-re-end/problem
# STATUS: Wrong Answer

S = input()
k = input()
import re
pattern = re.compile(k)
r = pattern.search(S)
if bool(r): print("(-1, -1)")
while r:
    print("({0}, {1})".format(r.start(), r.end() - 1))
    r = pattern.search(S,r.start() + 1)
