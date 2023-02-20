# DATE: 15/11/2022, 06:33:37
# PROBLEM NAME: String Game
# PROBLEM URL: https://www.codechef.com/problems/ABSTRING
# PROBLEM DIFFICULTY RATTING: 1102
# STATUS: time limit exceeded
# TIME: -
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    s = input()
    s_set = set(s)
    
    if all(map(lambda x: s.count(x)%2 == 0, s)):
        print("YES")
    else:
        print("NO")


