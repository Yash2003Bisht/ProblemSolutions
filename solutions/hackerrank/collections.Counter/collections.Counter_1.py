# QUESTION URL: https://www.hackerrank.com/challenges/collections-counter/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter
X = int(input())
shoe_size = Counter(list(map(int, input().split(" "))))
earned = 0

for _ in range(int(input())):
    data = list(map(int, input().split(" ")))
    if shoe_size[data[0]] != 0:
        earned += data[1]
        shoe_size[data[0]] -= 1
print(earned)
