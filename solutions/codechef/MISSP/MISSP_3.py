# DATE: 22/08/2022, 05:33:01
# PROBLEM NAME: Chef and Dolls
# PROBLEM URL: https://www.codechef.com/problems/MISSP
# PROBLEM DIFFICULTY RATTING: 1012
# STATUS: wrong answer
# TIME: 0.08
# MEMORY: 9.6M

for _ in range(int(input())):
    count = 0
    for _ in range(int(input())):
        n = int(input())
        count += n%2
    print(count)
    

