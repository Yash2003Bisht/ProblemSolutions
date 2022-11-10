# QUESTION URL: https://www.codechef.com/problems/ERROR
# STATUS: accepted
# TIME: 1.38
# MEMORY: 11.2M

for _ in range(int(input())):
    n = input()
    n = [i for i in n]
    for i in range(len(n)-2):
        if (n[i] == '0' and n[i+1] == '1' and n[i+2] == '0') or (n[i] == '1' and n[i+1] == '0' and n[i+2] == '1'):
            print('Good')
            break
    else:
        print('Bad')


