# QUESTION URL: https://www.codechef.com/problems/ERROR

for _ in range(int(input())):
    n=input()
    if n.find('101')==-1 or n.find('010')==-1:
        print('Bad')
    else:
        print('Good')


