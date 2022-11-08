# QUESTION URL: https://www.codechef.com/problems/TTENIS
# STATUS: accepted

for _ in range(int(input())):
    s = input()
    print('WIN' if s.count('1') > s.count('0') else 'LOSE')


