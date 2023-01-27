# QUESTION URL: https://www.hackerrank.com/challenges/gem-stones/problem
# STATUS: Accepted

gemstone = set()
for _ in range(int(input())):
    rock = set(input())
    if _ == 0:
        gemstone = rock
        continue
    gemstone = gemstone.intersection(rock)

print(len(gemstone))
