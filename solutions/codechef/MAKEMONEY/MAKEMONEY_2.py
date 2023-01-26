# QUESTION URL: https://www.codechef.com/problems/MAKEMONEY
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.6M

for _ in range(int(input())):
    n, x, c = map(int, input().split())
    a = list(map(int, input().split()))
    counter = 0
    
    for i in a:
        if x - i > c:
            counter += x - c
        else:
            counter += i
    
    print(counter)
    

