# DATE: 28/09/2023, 08:03:11
# PROBLEM NAME: Total Correct Submissions
# PROBLEM URL: https://www.codechef.com/problems/TOTCRT
# PROBLEM DIFFICULTY RATTING: 1499
# STATUS: accepted
# TIME: 0.41
# MEMORY: 13.4M

for _ in range(int(input())):
    n = int(input())*3
    problems = {}

    for __ in range(n):
        problem, sub = input().split()
        problems[problem] = problems.get(problem, 0) + int(sub)

    sorted_problems = sorted(problems.values())
    print(*sorted_problems)


