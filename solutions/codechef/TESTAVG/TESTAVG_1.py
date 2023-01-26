# QUESTION URL: https://www.codechef.com/problems/TESTAVG
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    marks = list(map(int, input().split()))
    marks.sort()
    avg = (marks[0] + marks[1]) / 2
    if avg < 35:
        print('Fail')
    else:
        print('Pass')

