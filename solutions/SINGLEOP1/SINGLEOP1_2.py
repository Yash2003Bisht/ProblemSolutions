# QUESTION URL: https://www.codechef.com/problems/SINGLEOP1

for _ in range(int(input())):
    s = int(input())
    s_b = list(input())
    try:
        print(s_b.index('0'))
    except ValueError:
        print(s)


