# QUESTION URL: https://www.codechef.com/problems/CHEFONDATE
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print('yes' if x>=y else 'no')

