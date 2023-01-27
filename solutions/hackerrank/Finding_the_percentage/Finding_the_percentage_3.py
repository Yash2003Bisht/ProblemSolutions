# QUESTION URL: https://www.hackerrank.com/challenges/finding-the-percentage/problem
# STATUS: Wrong Answer

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    total = student_marks[query_name]
    result = f"{sum(total) / len(total):5f}"
    if len(result.split(".")[1]) == 1:
        print(result[:4])
    else:
        print(result[:5])
