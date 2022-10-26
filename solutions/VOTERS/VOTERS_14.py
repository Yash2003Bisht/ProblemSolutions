# QUESTION URL: https://www.codechef.com/problems/VOTERS

from collections import Counter
n1, n2, n3 = map(int, input().split())
total = n1+n2+n3
lst = []

for _ in range(total):
    lst.append(int(input()))

data = Counter(lst)
final_lst = list(filter(lambda x: data[x] >= 2, data))
final_lst.sort()

print(len(final_lst))
for i in final_lst:
    print(i)


