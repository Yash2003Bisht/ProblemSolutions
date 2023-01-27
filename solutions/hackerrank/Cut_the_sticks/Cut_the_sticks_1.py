# QUESTION URL: https://www.hackerrank.com/challenges/cut-the-sticks/problem
# STATUS: Accepted

n = int(input())
i = list(map(int, input().split()))
lst = [len(i)]

while len(i) > 1:
    if all(items == i[0] for items in i):
        break
    num = min(i)
    lst.append(len(i) - i.count(num))
    i = list(filter(lambda a: a != num, i))

for i in lst:
    print(i)
