# QUESTION URL: https://www.hackerrank.com/challenges/py-collections-ordereddict/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict
d = OrderedDict()
N = int(input())
items = []
prices = []

for i in range(N):
    data = input().split(' ')
    items.append(" ".join(data[:len(data)-1]))
    prices.append(int(data[len(data)-1]))
    d.update({" ".join(data[:len(data) - 1]): 0})

for item, price in zip(items, prices):
    d[item] += price

for key, value in d.items():
    print(key, value)
