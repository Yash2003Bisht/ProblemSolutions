# DATE: 08/09/2022, 06:58:01
# PROBLEM NAME: Minimum Attendance Requirement
# PROBLEM URL: https://www.codechef.com/problems/ATTENDU
# PROBLEM DIFFICULTY RATTING: 1053
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.7M

print("\n".join(["YES" if (120-int(input())+int(input()))/120*100 >= 75 else "NO" for _ in range(int(input()))]))


