# QUESTION URL: https://www.hackerrank.com/challenges/word-order/problem
# STATUS: Accepted

from collections import Counter

word = []
num = int(input())
counter = []
for i in range(num):
    word.append(input())

set_word = set(word)

print(len(set_word))
for key, values in Counter(word).items():
    print(values, end=" ")
