# DATE: 15/11/2022, 06:39:10
# PROBLEM NAME: String Game
# PROBLEM URL: https://www.codechef.com/problems/ABSTRING
# PROBLEM DIFFICULTY RATTING: 1102
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    s = input()
    s_set = set(s)
    
    for i in s_set:
        if s.count(i) % 2 != 0:
            print("NO")
            break
    else:
        print("YES")


