# QUESTION URL: https://www.hackerrank.com/challenges/30-nested-logic/problem
# STATUS: Wrong Answer

# Enter your code here. Read input from STDIN. Print output to STDOUT00
def library():
    returned_date = list(map(int,input().split(" ")))
    due_date = list(map(int,input().split(" ")))
    d1, m1, y1 = returned_date[0], returned_date[1], returned_date[2]
    d2, m2, y2 = due_date[0], due_date[1], due_date[2]
    
    if d1 > d2 and m1 <= m2 and y1 <= y2:
        print(15*(d1-d2))
    elif m1 > m2 and y1 <= y2:
        print(500*(m1-m2))
    elif y1 > y2:
        print(10000)
    else:
        print(0)
        
library()
