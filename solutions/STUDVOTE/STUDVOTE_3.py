# QUESTION URL: https://www.codechef.com/problems/STUDVOTE

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    student_government = [0] * n
    for index, student in enumerate(a):
        if index != student - 1 and student_government[student - 1] >= 0:
            student_government[student - 1] += 1

        else:
            student_government[student - 1] = -1

    print(sum(map(lambda x: 1 if x >= k else 0, student_government)))


