# QUESTION URL: https://www.hackerrank.com/challenges/cut-the-sticks/problem
# STATUS: Wrong Answer

n = int(input())
i = list(map(int, input().split()))


lst = [len(i)]
num = 0
for _ in range(n):
    if len(i) > 1:
        num = min(i)
        lst.append(len(i)-i.count(num))
        i = list(filter(lambda a: a!=num, i))
    else:
        lst.append(1)
lst = list(set(lst))
lst.sort(reverse=True)

for i in lst:
    print(i)
