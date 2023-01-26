# QUESTION URL: https://www.codechef.com/problems/SPALNUM
# STATUS: accepted
# TIME: 4.26
# MEMORY: 9.6M

for _ in range(int(input())):
    a, b = map(int, input().split())
    count = 0
    
    for i in range(a, b+1):
        if str(i) == str(i)[::-1]:
            count += i
    
    print(count)
    

