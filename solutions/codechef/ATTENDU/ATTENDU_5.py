# DATE: 08/09/2022, 06:47:26
# PROBLEM NAME: Minimum Attendance Requirement
# PROBLEM URL: https://www.codechef.com/problems/ATTENDU
# PROBLEM DIFFICULTY RATTING: 1053
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    b = input()
    present = b.count('1')
    remaining_days = 120-n
    print("YES" if (present+remaining_days)/120*100 >= 75 else "NO")

