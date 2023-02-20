# DATE: 05/09/2022, 09:41:46
# PROBLEM NAME: Chef and Stock Prices 
# PROBLEM URL: https://www.codechef.com/problems/CSTOCK
# PROBLEM DIFFICULTY RATTING: 1069
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    s,a,b,c = map(int, input().split())
    stock_current_price = s+(s*c/100)
    if a<=stock_current_price<=b:
        print("Yes")
    else:
        print("No")


