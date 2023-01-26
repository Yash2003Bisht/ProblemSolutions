# QUESTION URL: https://www.codechef.com/problems/FODCHAIN
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.5M

for _ in range(int(input())):
    e, k = map(int, input().split())
    count = 0
    
    while(int(e) != 0):
        count += 1
        e /= k
    
    print(count)


