# QUESTION URL: https://www.hackerrank.com/challenges/designer-door-mat/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
size = list(map(int, input().split(" ")))
N = size[0]
M = size[1]

rows = N//2
slashes = (M-3)//2
design = 1
for _ in range(rows):
    print("-"*slashes + ".|."*design + "-"*slashes)
    slashes -= 3
    design += 2

print("-"*((M - 7)//2) + "WELCOME" + "-"*((M - 7)//2))

for _ in range(rows):
    slashes += 3
    design -= 2
    print("-"*slashes + ".|."*design + "-"*slashes)

