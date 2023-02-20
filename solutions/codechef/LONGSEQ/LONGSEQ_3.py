# DATE: 30/12/2022, 06:44:21
# PROBLEM NAME: Chef and digits of a number
# PROBLEM URL: https://www.codechef.com/problems/LONGSEQ
# PROBLEM DIFFICULTY RATTING: 1209
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.9M

for _ in range(int(input())):
    d = input()
    
    if d.count('1') == 1 or d.count('0') == 1:
        print("Yes")
    else:
        print("No")

