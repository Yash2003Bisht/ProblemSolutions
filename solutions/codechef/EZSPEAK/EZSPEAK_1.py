# DATE: 15/08/2022, 09:28:20
# PROBLEM NAME: Easy Pronunciation
# PROBLEM URL: https://www.codechef.com/problems/EZSPEAK
# PROBLEM DIFFICULTY RATTING: 1000
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

consonants = ['a', 'e', 'i', 'o', 'u']
for _ in range(int(input())):
    n = int(input())
    s = input()
    count = 0

    for i in s:
        if i not in consonants:
            count += 1
        else:
            count = 0
            
        if count == 4:
            print('No')
            break
    else:
        print('YES')


