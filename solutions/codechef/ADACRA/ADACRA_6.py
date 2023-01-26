# QUESTION URL: https://www.codechef.com/problems/ADACRA
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    s = input()
    down_count = 0
    up_count = 0
    crr = ''

    for i in range(len(s)):
        if s[i] == 'D' and crr != 'D':
            down_count += 1
            crr = 'D'
        elif s[i] == 'U' and crr != 'U':
            up_count += 1
            crr = 'U'

    print(min(down_count, up_count))

