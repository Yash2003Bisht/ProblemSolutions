# DATE: 02/02/2023, 07:55:13
# PROBLEM NAME: Zero String
# PROBLEM URL: https://www.codechef.com/problems/ZEROSTRING
# PROBLEM DIFFICULTY RATTING: 1042
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    s = input()
    total_1 = s.count('1')
    total_0 = s.count('0')

    if total_1 == 0:
        print(0)
    elif total_1 > total_0:
        print(total_0 + 1)
    elif total_1 <= total_0:
        print(total_1)


    

