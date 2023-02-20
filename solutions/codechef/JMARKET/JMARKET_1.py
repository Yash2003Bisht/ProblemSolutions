# DATE: 05/08/2022, 08:29:19
# PROBLEM NAME: Janmansh at Fruit Market
# PROBLEM URL: https://www.codechef.com/problems/JMARKET
# PROBLEM DIFFICULTY RATTING: 947
# STATUS: accepted
# TIME: 0.58
# MEMORY: 9.2M

for _ in range(int(input())):
    x, a, b, c = map(int, input().split(" "))
    fruit_prices = [a, b, c]
    fruit_prices.sort()
    print((x - 1) * fruit_prices[0] + fruit_prices[1])

