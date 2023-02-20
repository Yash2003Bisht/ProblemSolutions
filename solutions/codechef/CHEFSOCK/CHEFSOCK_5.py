# DATE: 07/12/2022, 07:28:02
# PROBLEM NAME: Chef and Socks
# PROBLEM URL: https://www.codechef.com/problems/CHEFSOCK
# PROBLEM DIFFICULTY RATTING: 1122
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

import sys

jacketCost, sockCost, money = map(int, sys.stdin.readline().split())
pair = sockCost*2
money -= jacketCost
total_cost = pair*(money // pair)

if money - total_cost >= sockCost:
    sys.stdout.write("Unlucky Chef")
else:
    sys.stdout.write("Lucky Chef")

