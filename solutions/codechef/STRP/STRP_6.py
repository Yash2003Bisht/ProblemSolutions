# QUESTION URL: https://www.codechef.com/problems/STRP
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    n = int(input())
    s = input()
    l = ''
    count = 1
    for i in s:
        if l == '':
            l += i
        elif l == i:
            count += 1
            l = ''
        else:
            l = i
            count += 1
    print(count)


