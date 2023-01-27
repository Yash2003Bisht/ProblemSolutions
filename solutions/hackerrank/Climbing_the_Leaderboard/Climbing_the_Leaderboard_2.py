# QUESTION URL: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys
import bisect

#
# Complete the 'climbingLeaderboard' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY ranked
#  2. INTEGER_ARRAY player
#

def climbingLeaderboard(ranked, player):
    # get a list of unique scores, still sorted descending
    scores = []
    i = 0
    lr = len(ranked)
    while i < lr:
        cur = ranked[i]
        scores.append(cur)
        while i < lr and cur == ranked[i]:
            i += 1
            
    n = len(scores)
    ans = []
    
    # initialize pointer outside the loop
    # the scores are sorted, so this prevents
    # iterating lower scores again
    i = 0
    
    # the index provides the ranking (n - i + 1)
    
    for score in player:
        # work from right to left in scores array
        while i < n and scores[n - i - 1] <= score:
            i += 1
            
        ans.append(n - i + 1)
        
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ranked_count = int(input().strip())

    ranked = list(map(int, input().rstrip().split()))

    player_count = int(input().strip())

    player = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(ranked, player)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
