# QUESTION URL: https://www.hackerrank.com/challenges/defaultdict-tutorial/problem
# STATUS: Wrong Answer

# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = list(map(int, input().split(' ')))
A = [input() for _ in range(n)]
B = [input() for _ in range(m)]
lst = []
for i in B:
    sub_lst = ''
    if A.count(i) > 1:
        for j in range(A.count(i)):
            sub_lst += f'{A.index(i)+1} '
            A[A.index(i)] = 0
    else:
        sub_lst += '-1 '
    lst.append(sub_lst)
for i in lst:
    print(i)
