# QUESTION URL: https://www.codechef.com/problems/DARLIG
# STATUS: wrong answer

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    if a%4 == 0:
        print('Off' if b == 0 else 'On')
    else:
        print('Ambiguous')

