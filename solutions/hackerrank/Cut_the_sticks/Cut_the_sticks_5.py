# QUESTION URL: https://www.hackerrank.com/challenges/cut-the-sticks/problem
# STATUS: Runtime Error

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
lst.remove(0)
print(lst)
