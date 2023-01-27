# QUESTION URL: https://www.hackerrank.com/challenges/defaultdict-tutorial/problem
# STATUS: Terminated due to timeout

# Enter your code here. Read input from STDIN. Print output to STDOUT
n,m = input().split()
a = []
b = []
index = []
for _ in range(int(n)):
    a.append(input())
for _ in range(int(m)):
    b.append(input())

for i in b:
    if i in a:
        sublist = []
        for j in a:
            try:
                sublist.append(a.index(i)+1)
                a[a.index(i)] = '%'
            except:
                pass
        index.append(sublist)
    else:
        index.append([-1])

for i in index:
    for j in i:
        print(j, end=" ")
    print()
