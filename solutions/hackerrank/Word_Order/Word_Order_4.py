# QUESTION URL: https://www.hackerrank.com/challenges/word-order/problem
# STATUS: Wrong Answer

from statistics import mode
word = []
num = int(input())
count = 0
counted = []
counter = []
for i in range(num):
    word.append(input())

# for i in word:
#     if i not in counted:
#         count += 1
#         counter.append(str(word.count(i)))
#         counted.append(i)
# print(count)
# print(" ".join(counter))
