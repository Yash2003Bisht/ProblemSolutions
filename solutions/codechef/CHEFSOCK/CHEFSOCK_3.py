# DATE: 07/12/2022, 07:35:41
# PROBLEM NAME: Chef and Socks
# PROBLEM URL: https://www.codechef.com/problems/CHEFSOCK
# PROBLEM DIFFICULTY RATTING: 1122
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

import sys

jacketCost, sockCost, money = map(int, sys.stdin.readline().split())
money -= jacketCost
total_sock = money // sockCost

if total_sock%2 == 0 and total_sock > 0:
    sys.stdout.write("Lucky Chef")
else:
    sys.stdout.write("Unlucky Chef")

