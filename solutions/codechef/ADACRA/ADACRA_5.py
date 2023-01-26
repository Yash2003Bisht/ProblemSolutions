# QUESTION URL: https://www.codechef.com/problems/ADACRA
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    s = input()
    count = 1

    for i in range(len(s)-1):
        if s[i] != s[i+1]:
            count += 1

    print(count//2)

