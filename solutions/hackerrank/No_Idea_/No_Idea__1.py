# QUESTION URL: https://www.hackerrank.com/challenges/no-idea/problem
# STATUS: Accepted

n, m = map(int, input().split(' '))
arr = list(map(int,input().split(' ')))
a = set(map(int, input().split(' ')))
b = set(map(int, input().split(' ')))

happiness = 0

for i in arr:
    if i in a:
        happiness += 1
    if i in b:
        happiness -= 1
print(happiness)
