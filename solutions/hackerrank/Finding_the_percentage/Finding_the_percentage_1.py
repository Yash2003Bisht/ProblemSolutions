# QUESTION URL: https://www.hackerrank.com/challenges/finding-the-percentage/problem
# STATUS: Accepted

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    total = student_marks[query_name]
    print(f"{(sum(total) / len(total)):.2f}")
