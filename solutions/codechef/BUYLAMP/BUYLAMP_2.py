# DATE: 25/07/2022, 07:56:20
# PROBLEM NAME: Buy Lamps
# PROBLEM URL: https://www.codechef.com/problems/BUYLAMP
# PROBLEM DIFFICULTY RATTING: 775
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.2M

# n -> number of lamps chef want to buy
# k -> number of lamps should be red
# x -> red lamp cost
# y -> blue lamp cost

for _ in range(int(input())):
    n, k, x, y = map(int, input().split(" "))
    
    if n == k and k == 0:
        print(x*n)
    
    else:
        red_lamps_cost = x * k
        print(red_lamps_cost + (n - k) * min(x,y))
        

