# QUESTION URL: https://www.hackerrank.com/challenges/py-set-add/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
N = int(input())
number = set()

for _ in range(N):
    stamp = input().rstrip()
    number.add(stamp)
print(len(number))
