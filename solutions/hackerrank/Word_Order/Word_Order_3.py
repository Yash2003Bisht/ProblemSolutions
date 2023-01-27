# QUESTION URL: https://www.hackerrank.com/challenges/word-order/problem
# STATUS: Terminated due to timeout

from statistics import mode

word = []
num = int(input())
counter = []
for i in range(num):
    word.append(input())

set_word = set(word)

for i in set_word:
    counter.append(str(word.count(i)))

counter.sort(reverse=True)
print(len(set_word))
print(" ".join(counter))
