# QUESTION URL: https://www.codechef.com/problems/FILLCANDIES
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    n, k, m = map(int, input().split(" "))
    number_of_candies_hold_in_bag = k*m
    if number_of_candies_hold_in_bag >= n:
        print(1)
    else:
        print(n // number_of_candies_hold_in_bag + n % number_of_candies_hold_in_bag)

