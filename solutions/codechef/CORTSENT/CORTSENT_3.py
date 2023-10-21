# DATE: 21/10/2023, 07:54:54
# PROBLEM NAME: Correct Sentence
# PROBLEM URL: https://www.codechef.com/problems/CORTSENT
# PROBLEM DIFFICULTY RATTING: 1485
# STATUS: accepted
# TIME: 0.06
# MEMORY: 11.1M

import re
import sys

lang1_regex = re.compile('^[a-m]+$')
lang2_regex = re.compile('^[N-Z]+$')

for _ in range(int(sys.stdin.readline())):
    words = sys.stdin.readline().split()[1:]

    for word in words:
        if not (lang1_regex.match(word) or lang2_regex.match(word)):
            sys.stdout.write("NO\n")
            break
    else:
        sys.stdout.write("YES\n")


