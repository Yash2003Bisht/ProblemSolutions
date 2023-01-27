# QUESTION URL: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
# STATUS: Runtime Error

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'climbingLeaderboard' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY ranked
#  2. INTEGER_ARRAY player
#

def binnary(l, u, ranked, value):
    n = len(ranked)    
    while n != 0:
        mid_value = (l+u)//2
        if value < min(ranked):
            return len(ranked)+1, l
        elif value < ranked[mid_value] and value > ranked[mid_value-1]:
            return len(ranked[mid_value:])+1, l
        elif value == ranked[mid_value]:
            return len(ranked[mid_value:]), l
        elif value >= max(ranked):
            return 1, l
        
        if ranked[mid_value] > value:
            u = mid_value
        else:
            l = mid_value
        
        n -= 1


def climbingLeaderboard(ranked, player):
    # Write your code here
    ranked = list(set(ranked))
    ranked.sort()

    num = 0
    l = 0
    u = len(ranked)-1

    lst = []

    while num != len(player):
        result, l = binnary(l, u, ranked, player[num])
        # l = l
        lst.append(result)
        num += 1
    
    return lst


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
