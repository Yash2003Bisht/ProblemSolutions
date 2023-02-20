# DATE: 04/08/2022, 06:38:12
# PROBLEM NAME: Mileage matters
# PROBLEM URL: https://www.codechef.com/problems/MILEAGE
# PROBLEM DIFFICULTY RATTING: 831
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    n, x, y, a, b = map(int, input().split(" "))
    total_price_petrol = (n/a)*x
    total_price_diesel = (n/b)*y
    
    if total_price_petrol > total_price_diesel:
        print('DIESEL')
    elif total_price_diesel > total_price_petrol:
        print('PETROL')
    else:
        print('ANY')

