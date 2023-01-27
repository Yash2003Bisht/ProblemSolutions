# QUESTION URL: https://www.hackerrank.com/challenges/gem-stones/problem
# STATUS: Accepted

print(len(set.intersection(*[set(input()) for _ in range(int(input()))])))
