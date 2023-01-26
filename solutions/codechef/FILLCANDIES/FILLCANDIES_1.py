# QUESTION URL: https://www.codechef.com/problems/FILLCANDIES
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    n, k, m = map(int, input().split(" "))
    number_of_candies_hold_in_bag = k*m
    if number_of_candies_hold_in_bag >= n:
        print(1)
    else:
        bags_required = n%number_of_candies_hold_in_bag
        print(n//number_of_candies_hold_in_bag if bags_required == 0 else n//number_of_candies_hold_in_bag + 1)

