# DATE: 06/09/2022, 06:08:12
# PROBLEM NAME: Chef and his Students
# PROBLEM URL: https://www.codechef.com/problems/CHEFSTUD
# PROBLEM DIFFICULTY RATTING: 1047
# STATUS: accepted
# TIME: 0.12
# MEMORY: 9.9M

for _ in range(int(input())):
    s = input()
    if s.count("*") == 0:
        print(s.count(">")-1)
    else:
        count = 0
        for i in range(len(s)-1):
            if s[i] == "<" and s[i+1] == ">":
                count += 1
        print(count)
        

