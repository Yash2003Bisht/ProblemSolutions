# QUESTION URL: https://www.hackerrank.com/challenges/30-nested-logic/problem
# STATUS: Runtime Error

# Enter your code here. Read input from STDIN. Print output to STDOUT00
def library():
    returned_date = list(map(int,input().split(" ")))
    due_date = list(map(int,input().split(" ")))
    d1, m1, y1 = returned_date[0], returned_date[1], returned_date[2]
    d2, m2, y2 = due_date[0], due_date[1], due_date[2]
    
    if y1 < y2 or (y1 == y2 and m1 < m2):
        print(0)
    elif y1 == y2 and m1 == m2:
        print(15*(d1-d2))
    elif y1 == y2 and m1 > m2:
        print(500(m1-m2))
    else:
        print(10000)
        
library()