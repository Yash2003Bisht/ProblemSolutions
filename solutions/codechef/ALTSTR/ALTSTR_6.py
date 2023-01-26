# QUESTION URL: https://www.codechef.com/problems/ALTSTR
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())
    s = input()
    count_1 = s.count('1')
    count_0 = s.count('0')
    
    if count_1 == count_0:
        print(n)
    else:
        print((min(count_1, count_0)*2)+1)

