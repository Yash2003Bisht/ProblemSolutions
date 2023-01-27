# QUESTION URL: https://www.hackerrank.com/challenges/the-love-letter-mystery/problem
# STATUS: Accepted

from string import ascii_lowercase
i = int(input())
for _ in range(i):
    word = input()
    if word[::-1] == word:
        print(0)
    else:
        word_reverse = word[::-1]
        print(sum([abs(ascii_lowercase.index(word_reverse[i]) - ascii_lowercase.index(word[i])) for i in range(len(word) // 2)]) )
