# QUESTION URL: https://www.codechef.com/problems/BUY1GET1
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    j = input()
    j_set = set(j)
    total = 0
    for i in j_set:
        if j.count(i)%2 == 0:
            total += j.count(i)//2
        else:
            total += j.count(i)//2 + j.count(i)%2
    print(total)



