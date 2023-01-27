# QUESTION URL: https://www.hackerrank.com/challenges/nested-list/problem
# STATUS: Wrong Answer

student = {}
lst_name = []

for _ in range(int(input())):
    name = input()
    score = float(input())
    student.update({name: score})

min_score = min(student.values())

for key, value in student.items():
    if value == min_score:
        student.pop(key)
        break

second_last = min(student.values())

for key, value in student.items():
    if value == second_last:
        lst_name.append(key)

lst_name.sort()

for i in lst_name:
    print(i)
