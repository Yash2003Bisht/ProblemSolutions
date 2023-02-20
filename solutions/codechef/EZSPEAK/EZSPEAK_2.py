# DATE: 15/08/2022, 09:25:57
# PROBLEM NAME: Easy Pronunciation
# PROBLEM URL: https://www.codechef.com/problems/EZSPEAK
# PROBLEM DIFFICULTY RATTING: 1000
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.6M

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


