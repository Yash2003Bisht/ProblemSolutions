# QUESTION URL: https://www.codechef.com/problems/CO92JUDG
# STATUS: accepted
# TIME: 0.02
# MEMORY: 8.9M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split(" ")))
    b = list(map(int, input().split(" ")))
    
    total_a = sum(a) - max(a)
    total_b = sum(b) - max(b)
    
    if total_a > total_b:
        print('Bob')
    elif total_b > total_a:
        print('Alice')
    else:
        print('Draw')

    

