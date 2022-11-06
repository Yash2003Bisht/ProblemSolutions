# QUESTION URL: https://www.codechef.com/problems/EZSPEAK
# STATUS: wrong answer

consonants = ['a', 'e', 'i', 'o', 'u']
for _ in range(int(input())):
    n = int(input())
    s = input()
    count = 4

    for i in range(n//4):
        if not any(map(lambda x: x in consonants, s[i*4:count])):
            print('NO')
            break
        count += 4
    else:
        print('YES')


