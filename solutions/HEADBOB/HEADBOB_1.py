# QUESTION URL: https://www.codechef.com/problems/HEADBOB
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    s = input()
    if s.count('I') >= 1:
        print("INDIAN")
    elif len(set(s)) == 1 and s[0] == 'N':
        print("NOT SURE")
    else:
        print("NOT INDIAN")

