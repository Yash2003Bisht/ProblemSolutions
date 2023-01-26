# QUESTION URL: https://www.codechef.com/problems/ADACRA
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    s = input()
    down_count = 0
    up_count = 0

    for i in range(len(s) - 1):
        if s[i] != s[i + 1]:
            if s[i] == 'D':
                down_count += 1
            else:
                up_count += 1
    
    if s.endswith('U'):
        up_count += 1
    else:
        down_count += 1

    print(min(down_count, up_count))

