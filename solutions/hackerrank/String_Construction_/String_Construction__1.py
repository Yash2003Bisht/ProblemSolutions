# QUESTION URL: https://www.hackerrank.com/challenges/string-construction/problem
# STATUS: Accepted

print("\n".join([str(len(set(input()))) for _ in range(int(input()))]))
