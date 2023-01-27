# QUESTION URL: https://www.hackerrank.com/challenges/cut-the-sticks/problem
# STATUS: Wrong Answer

n = int(input())
i = list(map(int, input().split()))

lst = [len(i)]
num = 0
for _ in range(n-1):
    num = min(i)
    lst.append(len(i)-i.count(num))
    i.remove(num)
lst = list(set(lst))
lst.sort(reverse=True)

for i in lst:
    print(i)
