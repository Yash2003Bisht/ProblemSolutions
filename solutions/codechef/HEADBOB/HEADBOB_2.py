# DATE: 08/09/2022, 12:54:59
# PROBLEM NAME: Tanu and Head-bob
# PROBLEM URL: https://www.codechef.com/problems/HEADBOB
# PROBLEM DIFFICULTY RATTING: 1065
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

