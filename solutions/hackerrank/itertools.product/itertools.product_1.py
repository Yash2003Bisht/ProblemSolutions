# QUESTION URL: https://www.hackerrank.com/challenges/itertools-product/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
import itertools

a = list(map(int, input().split(" ")))
b = list(map(int, input().split(" ")))
ans = ''
for i in itertools.product(a,b):
    ans += f'{i} '

print(ans)
