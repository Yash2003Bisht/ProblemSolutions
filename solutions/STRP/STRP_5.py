# QUESTION URL: https://www.codechef.com/problems/STRP

for _ in range(int(input())):
    n = int(input())
    s = input()
    count = 1
    i = 0
    while i < n - 1:
        if s[i] == s[i + 1]:
            i += 2
        else:
            i += 1
        count += 1

    print(count)


