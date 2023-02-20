# DATE: 11/10/2022, 06:28:37
# PROBLEM NAME: Discrepancies in the Voters List
# PROBLEM URL: https://www.codechef.com/problems/VOTERS
# PROBLEM DIFFICULTY RATTING: 1114
# STATUS: accepted
# TIME: 0.20
# MEMORY: 23M

from collections import Counter
n1, n2, n3 = map(int, input().split())
total = n1+n2+n3
lst = []

for _ in range(total):
    lst.append(int(input()))

data = Counter(lst)
final_lst = list(set(filter(lambda x: data[x] >= 2, lst)))
final_lst.sort()

print(len(final_lst))
for i in final_lst:
    print(i)


