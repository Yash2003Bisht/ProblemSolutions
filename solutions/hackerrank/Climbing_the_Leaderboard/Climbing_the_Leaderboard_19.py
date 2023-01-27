# QUESTION URL: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
# STATUS: Terminated due to timeout

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
def climbingLeaderboard(ranked, player):
    # Write your code here
    ranked = list(set(ranked))
    ranked.sort()

    num = 0
    l = 0
    u = len(ranked)-1

    lst = []

    while num != len(player):
        mid_value = (l+u)//2
    
        if player[num] < min(ranked):
            lst.append(len(ranked)+1)
        elif player[num] < ranked[mid_value] and player[num] > ranked[mid_value-1]:
            lst.append(len(ranked[mid_value:])+1)
        elif player[num] == ranked[mid_value]:
            lst.append(len(ranked[mid_value:]))
        elif player[num] >= max(ranked):
            lst.append(1)
        
        if ranked[mid_value] > player[num]:
            u = mid_value
        elif ranked[mid_value] < player[num]:
            l = mid_value
            u = len(ranked)-1
        
        if len(lst[num:]) == 0:
            continue

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
