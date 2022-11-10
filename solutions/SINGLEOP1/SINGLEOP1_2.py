# QUESTION URL: https://www.codechef.com/problems/SINGLEOP1
# STATUS: accepted
# TIME: 0.19
# MEMORY: 11.2M

for _ in range(int(input())):
    s = int(input())
    s_b = list(input())
    try:
        print(s_b.index('0'))
    except ValueError:
        print(s)


