# QUESTION URL: https://www.codechef.com/problems/STRP
# STATUS: accepted
# TIME: 0.05
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    s = input()
    i = 0
    while i < len(s)-1:
        if s[i] == s[i + 1]:
            i += 2
            n -= 1
        else:
            i += 1

    print(n)


