# QUESTION URL: https://www.hackerrank.com/challenges/quicksort1/problem
# STATUS: Accepted

n = int(input())
a = list(map(int, input().split()))
left = []
equal = []
right = []
pivot = a[0]

for i in a:
    if i < pivot:
        left.append(i)
    elif i > pivot:
        right.append(i)
    else:
        equal.append(i)
        
lst = left + equal + right

print(" ".join(map(str, lst)))
