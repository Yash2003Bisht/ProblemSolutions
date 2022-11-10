# QUESTION URL: https://www.codechef.com/problems/CHEFSTUD
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


