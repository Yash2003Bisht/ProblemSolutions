# QUESTION URL: https://www.hackerrank.com/challenges/py-collections-namedtuple/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
N = int(input())
table = [[i for i in input().split(' ') if i != ''] for _ in range(N+1)]
index = table[0].index('MARKS')
print(f'{sum([int(table[i][index]) for i in range(1, len(table))])/(len(table)-1):.2f}')
