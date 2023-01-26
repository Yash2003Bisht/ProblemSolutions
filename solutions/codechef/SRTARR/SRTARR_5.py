# QUESTION URL: https://www.codechef.com/problems/SRTARR
# STATUS: accepted
# TIME: 1.09
# MEMORY: 10.3M

for _ in range(int(input())):
    n = int(input())
    s = input()
    count = 0

    for i in range(n-1):
        if s[i] == '1' and s[i+1] == '0':
            count += 1

    print(count)


