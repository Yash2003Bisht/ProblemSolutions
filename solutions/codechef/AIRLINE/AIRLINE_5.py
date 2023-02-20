# DATE: 30/08/2022, 06:48:56
# PROBLEM NAME: Airline Restrictions
# PROBLEM URL: https://www.codechef.com/problems/AIRLINE
# PROBLEM DIFFICULTY RATTING: 1042
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for i in range(int(input())):
    a, b, c, d, e = map(int, input().split())
    lst = [a, b, c]
    lst.sort(reverse=True)
    carry_bags = list(filter(lambda x: x <= e, [a, b, c]))
    if len(carry_bags) == 0:
        print('NO')
    else:
        check_in_bags = sum(carry_bags) - max(carry_bags)
        if check_in_bags <= d:
            print('YES')
        else:
            print('NO')

