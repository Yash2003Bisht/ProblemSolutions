# QUESTION URL: https://www.codechef.com/problems/KEPLERSLAW

for _ in range(int(input())):
    s = list(map(int, input().split(" ")))
    print('Yes' if s[0]**2/s[2]**3 == s[1]**2/s[3]**3 else 'No')

