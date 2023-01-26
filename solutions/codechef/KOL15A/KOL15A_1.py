# QUESTION URL: https://www.codechef.com/problems/KOL15A
# STATUS: accepted
# TIME: 0.09
# MEMORY: 9.7M

print("\n".join([str(sum([int(i) for i in input() if i.isdigit()])) for _ in range(int(input()))]))


