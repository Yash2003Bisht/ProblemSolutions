# QUESTION URL: https://www.codechef.com/problems/CHEFSOCK
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

