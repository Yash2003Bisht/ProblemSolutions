# QUESTION URL: https://www.hackerrank.com/challenges/symmetric-difference/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
M = int(input())
set1 = set(map(int, input().split()))
N = int(input())
set2 = set(map(int, input().split()))
diff = []

def add_data(n):
    for i in n:
        diff.append(i)

for i in range(2):
    if i%2 == 0:
        add_data(set1.difference(set2))
    else:
        add_data(set2.difference(set1))
diff.sort()
for i in diff:
    print(i)
