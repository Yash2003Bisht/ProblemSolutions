# QUESTION URL: https://www.hackerrank.com/challenges/nested-list/problem
# STATUS: Accepted

student = {}
lst_name = []
remove_student = []

for _ in range(int(input())):
    name = input()
    score = float(input())
    student.update({name: score})

min_score = min(student.values())

for key, value in student.items():
    if value == min_score:
        remove_student.append(key)

for student_name in remove_student:
    student.pop(student_name)

second_last = min(student.values())

for key, value in student.items():
    if value == second_last:
        lst_name.append(key)

lst_name.sort()

for i in lst_name:
    print(i)
