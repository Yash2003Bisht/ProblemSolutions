# QUESTION URL: https://www.hackerrank.com/challenges/py-collections-namedtuple/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
# Enter your code here. Read input from STDIN. Print output to STDOUT
N = int(input())
table = []

for _ in range(N+1):
    table_data = input().split(' ')
    sub_table= []
    for i in table_data:
        if i != '':
            sub_table.append(i)
    table.append(sub_table)

index = table[0].index('MARKS')
print(f'{sum([int(table[i][index]) for i in range(1, len(table))])/(len(table)-1):.2f}')
