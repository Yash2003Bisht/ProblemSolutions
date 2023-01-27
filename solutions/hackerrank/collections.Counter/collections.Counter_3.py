# QUESTION URL: https://www.hackerrank.com/challenges/collections-counter/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter
X = int(input())
shoe_size = Counter(list(map(int, input().split(" "))))
N = int(input())
record = []
for _ in range(N):
    data = list(map(int, input().split(" ")))
    record.append(data)

earned = 0
for i in record:
    if shoe_size[i[0]] != 0:
        earned += i[1]
        shoe_size[i[0]] -= 1
print(earned)
