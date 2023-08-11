# DATE: 11/08/2023, 08:30:47
# PROBLEM NAME: Alt-Tab
# PROBLEM URL: https://www.codechef.com/problems/ALTTAB
# PROBLEM DIFFICULTY RATTING: 1396
# STATUS: accepted
# TIME: 0.05
# MEMORY: 13.7M

programs_open = []
recent_programs = {}
n = int(input())
    
for _ in range(n):
    programs_open.append(input())

for program in programs_open[::-1]:
    if not recent_programs.get(program):
        recent_programs[program] = 1
        print(program[-2:], end="")



