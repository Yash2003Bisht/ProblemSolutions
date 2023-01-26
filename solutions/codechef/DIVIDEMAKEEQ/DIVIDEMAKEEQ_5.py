# QUESTION URL: https://www.codechef.com/problems/DIVIDEMAKEEQ
# STATUS: accepted
# TIME: 0.55
# MEMORY: 10.3M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a_min = min(a)
    count = 0
    
    for i in a:
        if i != a_min and i % a_min == 0:
            count += 1
        elif i != a_min:
            count = n
            break
    
    print(count)

