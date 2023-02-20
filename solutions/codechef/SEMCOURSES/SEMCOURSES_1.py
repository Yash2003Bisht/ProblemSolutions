# DATE: 29/07/2022, 06:59:25
# PROBLEM NAME: Chef and Chapters
# PROBLEM URL: https://www.codechef.com/problems/SEMCOURSES
# PROBLEM DIFFICULTY RATTING: 350
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.2M

for _ in range(int(input())):
    x, y, z = map(int, input().split(" "))
    total_units = x * y
    print(total_units * z)

