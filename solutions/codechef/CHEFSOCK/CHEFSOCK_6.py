# QUESTION URL: https://www.codechef.com/problems/CHEFSOCK
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

jacketCost, sockCost, money = map(int, input().split())
pair = sockCost*2
money -= jacketCost
total_cost = pair*(money // pair)

if money - total_cost >= sockCost:
    print("Unlucky Chef")
else:
    print("Lucky Chef")

