# QUESTION URL: https://www.codechef.com/problems/SEMCOURSES
# STATUS: accepted

for _ in range(int(input())):
    x, y, z = map(int, input().split(" "))
    total_units = x * y
    print(total_units * z)

