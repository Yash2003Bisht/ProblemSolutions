# DATE: 07/09/2022, 05:54:30
# PROBLEM NAME: String protocol
# PROBLEM URL: https://www.codechef.com/problems/STRP
# PROBLEM DIFFICULTY RATTING: 1065
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    n = int(input())
    s = input()
    l = ''
    count = 1
    if len(set(s)) == 1:
        print(len(set(s))//2 if len(set(s))%2==0 else len(set(s))//2+1)
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


