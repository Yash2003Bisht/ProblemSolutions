# QUESTION URL: https://www.hackerrank.com/challenges/itertools-permutations/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations
s, k = input().split()
values = list(permutations(s, int(k)))
values.sort()
for i in values:
    for j in i:
        print(j, end="")
    print()
