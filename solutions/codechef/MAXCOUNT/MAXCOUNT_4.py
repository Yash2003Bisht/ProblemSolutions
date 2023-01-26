# QUESTION URL: https://www.codechef.com/problems/MAXCOUNT
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.9M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    values = a.most_common()[0]
    print(values[0], values[1])

