# QUESTION URL: https://www.codechef.com/problems/VOTERS

from collections import Counter
total = sum(map(int, input().split()))
lst = []

for _ in range(total):
    lst.append(int(input()))

data = Counter(lst)
final_lst = list(filter(lambda x: data[x] >= 2, data))
final_lst.sort()

print(len(final_lst))
for i in final_lst:
    print(i)


