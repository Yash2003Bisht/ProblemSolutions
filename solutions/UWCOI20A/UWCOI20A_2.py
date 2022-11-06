# QUESTION URL: https://www.codechef.com/problems/UWCOI20A
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    lst = []
    for _ in range(n):
        lst.append(int(input()))
    
    print(max(lst))

