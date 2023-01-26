# QUESTION URL: https://www.codechef.com/problems/ERROR
# STATUS: wrong answer
# TIME: 0.03
# MEMORY: 9.9M

for _ in range(int(input())):
    n=input()
    if n.find('101')==-1 or n.find('010')==-1:
        print('Bad')
    else:
        print('Good')


