# QUESTION URL: https://www.hackerrank.com/challenges/itertools-permutations/problem
# STATUS: Wrong Answer

# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations
s, k = input().split()
values = list(permutations(s, 2))
values.sort()
for i in values:
    for j in i:
        print(j, end="")
    print()
