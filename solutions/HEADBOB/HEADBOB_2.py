# QUESTION URL: https://www.codechef.com/problems/HEADBOB
# STATUS: wrong answer
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    s = input()
    if s.count('I') >= 1:
        print("INDIAN")
    elif len(set(s)) == 1:
        print("NOT SURE")
    else:
        print("NOT INDIAN")

