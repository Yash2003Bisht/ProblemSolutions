# QUESTION URL: https://www.codechef.com/problems/UWCOI20A
# STATUS: accepted
# TIME: 0.38
# MEMORY: 13.6M

for _ in range(int(input())):
    n = int(input())
    lst = []
    for _ in range(n):
        lst.append(int(input()))
    
    print(max(lst))

