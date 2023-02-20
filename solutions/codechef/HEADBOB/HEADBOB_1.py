# DATE: 08/09/2022, 12:57:07
# PROBLEM NAME: Tanu and Head-bob
# PROBLEM URL: https://www.codechef.com/problems/HEADBOB
# PROBLEM DIFFICULTY RATTING: 1065
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    s = input()
    if s.count('I') >= 1:
        print("INDIAN")
    elif len(set(s)) == 1 and s[0] == 'N':
        print("NOT SURE")
    else:
        print("NOT INDIAN")

