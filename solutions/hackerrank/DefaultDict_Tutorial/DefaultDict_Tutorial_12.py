# QUESTION URL: https://www.hackerrank.com/challenges/defaultdict-tutorial/problem
# STATUS: Wrong Answer

# Enter your code here. Read input from STDIN. Print output to STDOUT
m,n  = list(map(int, input().split(" ")))
a = [input() for _ in range(m)]
b = [input() for _ in range(n)]

for i in b:
    result = ''
    if i in a:
        for _ in range(a.count(i)):
            result += f'{a.index(i)+1} '
            a[a.index(i)] = None
    else:
        result += '-1 '
    print(result)
