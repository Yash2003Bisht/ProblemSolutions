# QUESTION URL: https://www.codechef.com/problems/CHEFSTUD

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
        

