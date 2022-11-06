# QUESTION URL: https://www.codechef.com/problems/CO92JUDG
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split(" ")))
    b = list(map(int, input().split(" ")))
    x = max(a)
    y = max(b)
    
    total_a = sum(a) - x
    total_b = sum(b) - y
    
    if total_a > total_b:
        print('Bob')
    elif total_b > total_a:
        print('Alice')
    else:
        print('Draw')

    

