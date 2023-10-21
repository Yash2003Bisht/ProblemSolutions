# DATE: 21/10/2023, 07:55:15
# PROBLEM NAME: Correct Sentence
# PROBLEM URL: https://www.codechef.com/problems/CORTSENT
# PROBLEM DIFFICULTY RATTING: 1485
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

import re

lang1_regex = re.compile('^[a-m]+$')
lang2_regex = re.compile('^[N-Z]+$')

for _ in range(int(input())):
    words = input().split()[1:]

    for word in words:
        if not (lang1_regex.match(word) or lang2_regex.match(word)):
            print("NO")
            break
    else:
        print("YES")


