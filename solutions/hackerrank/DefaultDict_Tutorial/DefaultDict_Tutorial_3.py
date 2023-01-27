# QUESTION URL: https://www.hackerrank.com/challenges/defaultdict-tutorial/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = map(int, input().split(' '))
a = [input() for _ in range(n)]
b = [input() for _ in range(m)]

for i in b:
    result = ''
    copy_list = a.copy()
    if i in copy_list:
        for _ in range(copy_list.count(i)):
            result += f'{copy_list.index(i)+1} '
            copy_list[copy_list.index(i)] = '&'
    else:
        result += '-1'
    print(result)
