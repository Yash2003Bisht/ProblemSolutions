# DATE: 13/12/2022, 06:12:15
# PROBLEM NAME: Studying Alphabet
# PROBLEM URL: https://www.codechef.com/problems/ALPHABET
# PROBLEM DIFFICULTY RATTING: 1123
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

import sys

s = sys.stdin.readline()
n = int(sys.stdin.readline())

for _ in range(n):
    w = sys.stdin.readline()
    
    if all(map(lambda x: x in s, w)):
        sys.stdout.write("Yes\n")
    else:
        sys.stdout.write("No\n")

