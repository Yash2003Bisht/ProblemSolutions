# QUESTION URL: https://www.hackerrank.com/challenges/gem-stones/problem
# STATUS: Accepted

rocks = []
for _ in range(int(input())):
    rocks.append(input())

gemstone = rocks[0]

for rock in rocks[1:]:
    for gem in gemstone:
        if gem not in rock:
            gemstone = gemstone.replace(gem, " ")
            
print(len(set(gemstone.replace(" ", ""))))
