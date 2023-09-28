# DATE: 28/09/2023, 08:00:30
# PROBLEM NAME: Total Correct Submissions
# PROBLEM URL: https://www.codechef.com/problems/TOTCRT
# PROBLEM DIFFICULTY RATTING: 1499
# STATUS: accepted
# TIME: 0.43
# MEMORY: 15.4M

for _ in range(int(input())):
    n = int(input())*3
    problems = {}

    for __ in range(n):
        problem, sub = input().split()
        
        if problems.get(problem):
            problems[problem] += int(sub)
        else:
            problems[problem] = int(sub)

    sorted_problems = sorted(problems, key=lambda problem: problems[problem])
    result = " ".join([str(problems[problem]) for problem in sorted_problems])
    print(result)


