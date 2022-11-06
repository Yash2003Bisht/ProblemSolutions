# QUESTION URL: https://www.codechef.com/problems/ATTENDU
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    b = input()
    present = b.count('1')
    remaining_days = 120-n
    print("YES" if (present+remaining_days)/120*100 >= 75 else "NO")

