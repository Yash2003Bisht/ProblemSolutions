# QUESTION URL: https://www.codechef.com/problems/QTOO_2523
# STATUS: wrong answer
# TIME: 0.05
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    s = input()
    min_count = 101
    
    for i in set(s):
        temp = s.count(i)
        if temp > 1 and temp < min_count:
            min_count = temp
    
    if min_count < 101:
        print(n - min_count)
    else:
        print(-1)

