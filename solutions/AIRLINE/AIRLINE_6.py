# QUESTION URL: https://www.codechef.com/problems/AIRLINE
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for i in range(int(input())):
    a, b, c, d, e = map(int, input().split())
    lst = [a, b, c]
    lst.sort(reverse=True)
    if sum([lst[0], lst[1]]) <= d and lst[2] <= e:
        print('YES')
    else:
        print('NO')

