# QUESTION URL: https://www.codechef.com/problems/JMARKET
# STATUS: accepted

for _ in range(int(input())):
    x, a, b, c = map(int, input().split(" "))
    fruit_prices = [a, b, c]
    fruit_prices.sort()
    print((x - 1) * fruit_prices[0] + fruit_prices[1])

