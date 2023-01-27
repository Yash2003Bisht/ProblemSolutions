# QUESTION URL: https://www.hackerrank.com/challenges/word-order/problem
# STATUS: Accepted

from collections import Counter

num = int(input())
word = [input() for _ in range(num)]
set_word = set(word)

print(len(set_word))
for key, values in Counter(word).items():
    print(values, end=" ")
