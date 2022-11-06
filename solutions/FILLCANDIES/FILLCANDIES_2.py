# QUESTION URL: https://www.codechef.com/problems/FILLCANDIES
# STATUS: accepted

for _ in range(int(input())):
    n, k, m = map(int, input().split(" "))
    number_of_candies_hold_in_bag = k*m
    if number_of_candies_hold_in_bag >= n:
        print(1)
    else:
        bags_required = str(n / number_of_candies_hold_in_bag).split('.')
        print(bags_required[0] if bags_required[1] == '0' else int(bags_required[0]) + 1)

