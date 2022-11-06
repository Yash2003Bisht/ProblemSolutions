# QUESTION URL: https://www.codechef.com/problems/STRP
# STATUS: wrong answer

for _ in range(int(input())):
    n = int(input())
    s = input()
    l = ''
    count = 1
    if len(set(s)) == 1:
        print(len(set(s))//2 if len(set(s))%2==0 else len(set(s))//2+1)
    else:
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


