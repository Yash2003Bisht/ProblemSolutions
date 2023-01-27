# QUESTION URL: https://www.hackerrank.com/challenges/the-love-letter-mystery/problem
# STATUS: Wrong Answer

from string import ascii_lowercase
i = int(input())
for _ in range(i):
    word = input()
    if word[::-1] == word:
        print(0)
    else:
        print(sum([ascii_lowercase.index(word[i]) for i in range(len(word) // 2, 0, -1)]) )
