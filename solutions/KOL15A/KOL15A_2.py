# QUESTION URL: https://www.codechef.com/problems/KOL15A
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.6M

for _ in range(int(input())):
    print(sum([int(i) for i in input() if i.isdigit()]))


