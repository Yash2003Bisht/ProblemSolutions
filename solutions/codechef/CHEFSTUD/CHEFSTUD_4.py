# DATE: 06/09/2022, 05:58:11
# PROBLEM NAME: Chef and his Students
# PROBLEM URL: https://www.codechef.com/problems/CHEFSTUD
# PROBLEM DIFFICULTY RATTING: 1047
# STATUS: accepted
# TIME: 0.20
# MEMORY: 10.2M

for _ in range(int(input())):
    s = input()
    new_s = ""
    for i in s:
        if i == "*":
            new_s += "*"
        elif i == ">":
            new_s += "<"
        else:
            new_s += ">"
    print(new_s.count("><"))


