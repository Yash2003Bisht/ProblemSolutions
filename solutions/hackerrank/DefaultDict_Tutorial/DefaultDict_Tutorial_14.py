# QUESTION URL: https://www.hackerrank.com/challenges/defaultdict-tutorial/problem
# STATUS: Wrong Answer

# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter
m,n  = list(map(int, input().split(" ")))
a = []
b = []
for _ in range(m):
    a.append(input())
for _ in range(n):
    b.append(input())

value = Counter(a)

for i in b:
    result = ""
    if i in a:
        for _ in range(value[i]):
            result += f"{a.index(i)+1} "
            a[a.index(i)] = None
    else:
        result += "-1 "
    print(result)

