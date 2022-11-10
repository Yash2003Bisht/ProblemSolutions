# QUESTION URL: https://www.codechef.com/problems/ERROR
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.8M

for _ in range(int(input())):
    n=input()
    if '101' in n or '010' in n:
        print('Good')
    else:
        print('Bad')


