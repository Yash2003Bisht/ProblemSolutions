# QUESTION URL: https://www.hackerrank.com/challenges/input/problem
# STATUS: Accepted

x, k = map(int, input().split(' '))
p = input()

result = eval(p)
print(True if result == k else False)
