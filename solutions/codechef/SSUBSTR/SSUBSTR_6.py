# QUESTION URL: https://www.codechef.com/problems/SSUBSTR
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.8M

from sys import stdin, stdout

for _ in range(int(stdin.readline())):
    stdin.readline()
    stdout.write(str(stdin.readline().count('10')) + '\n')

