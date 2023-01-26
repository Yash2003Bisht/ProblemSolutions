# QUESTION URL: https://www.codechef.com/problems/JMARKET
# STATUS: accepted
# TIME: 0.59
# MEMORY: 9.3M

for _ in range(int(input())):
    x, a, b, c = map(int, input().split(" "))
    fruits_prices = [a, b, c]
    first_fruit = min(fruits_prices)
    fruits_prices.remove(first_fruit) # remove the fruit
    second_fruit = min(fruits_prices)
    print(second_fruit + first_fruit*(x-1))

