# QUESTION URL: https://www.hackerrank.com/challenges/gem-stones/problem
# STATUS: Accepted

s = int(input())
gemstone = set(input())
for _ in range(s-1):
    rock = set(input())
    gemstone = gemstone.intersection(rock)

print(len(gemstone))
