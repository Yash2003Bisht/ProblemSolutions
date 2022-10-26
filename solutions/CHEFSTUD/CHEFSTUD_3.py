# QUESTION URL: https://www.codechef.com/problems/CHEFSTUD

for _ in range(int(input())):
    s = input()
    new_s = ""
    if s.count("*") == 0:
        print(s.count(">")-1)
    else:
        for i in s:
            if i == "*":
                new_s += "*"
            elif i == ">":
                new_s += "<"
            else:
                new_s += ">"
        print(new_s.count("><"))


