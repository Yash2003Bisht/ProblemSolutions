# QUESTION URL: https://www.codechef.com/problems/FILLCANDIES

for _ in range(int(input())):
    n, k, m = map(int, input().split(" "))
    number_of_candies_hold_in_bag = k*m
    if number_of_candies_hold_in_bag >= n:
        print(1)
    else:
        print(n // number_of_candies_hold_in_bag + n % number_of_candies_hold_in_bag)

