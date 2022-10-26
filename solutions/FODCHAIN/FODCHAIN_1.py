# QUESTION URL: https://www.codechef.com/problems/FODCHAIN

for _ in range(int(input())):
    e, k = map(int, input().split())
    count = 0
    
    while(int(e) != 0):
        count += 1
        e /= k
    
    print(count)


