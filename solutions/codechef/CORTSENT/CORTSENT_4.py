# DATE: 21/10/2023, 07:54:17
# PROBLEM NAME: Correct Sentence
# PROBLEM URL: https://www.codechef.com/problems/CORTSENT
# PROBLEM DIFFICULTY RATTING: 1485
# STATUS: accepted
# TIME: 0.07
# MEMORY: 10.9M

import re
import sys

lang1_regex = re.compile('^[a-m]+$')
lang2_regex = re.compile('^[N-Z]+$')

for _ in range(int(sys.stdin.readline())):
    words = sys.stdin.readline().split()[1:]

    for word in words:
        if not (lang1_regex.match(word) or lang2_regex.match(word)):
            print("NO")
            break
    else:
        print("YES")


