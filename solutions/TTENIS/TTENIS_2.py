# QUESTION URL: https://www.codechef.com/problems/TTENIS
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.4M

for _ in range(int(input())):
    s = input()
    print('WIN' if s.count('1') > s.count('0') else 'LOSE')


