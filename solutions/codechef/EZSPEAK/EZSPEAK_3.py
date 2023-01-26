# QUESTION URL: https://www.codechef.com/problems/EZSPEAK
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.6M

consonants = ['B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z']
for _ in range(int(input())):
    n = int(input())
    s = input().upper()
    count = 4

    for i in range(n//4):
        if all(map(lambda x: x in consonants, s[i*4:count])):
            print('NO')
            break
        count += 4
    else:
        print('YES')
        pass


