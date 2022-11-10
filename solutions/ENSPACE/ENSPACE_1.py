# QUESTION URL: https://www.codechef.com/problems/ENSPACE
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    n, x, y = map(int, input().split(" "))
    print('yes' if x + y*2 <= n else 'no')

