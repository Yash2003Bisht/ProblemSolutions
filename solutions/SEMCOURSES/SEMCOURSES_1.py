# QUESTION URL: https://www.codechef.com/problems/SEMCOURSES
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.2M

for _ in range(int(input())):
    x, y, z = map(int, input().split(" "))
    total_units = x * y
    print(total_units * z)

