# QUESTION URL: https://www.codechef.com/problems/FILLCANDIES
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, k, m = map(int, input().split(" "))
    if n == k*m:
        print(1)
    else:
        number_of_candies_hold_in_bag = k*m
        print(n // number_of_candies_hold_in_bag + n % number_of_candies_hold_in_bag)

