# QUESTION URL: https://www.codechef.com/problems/CSTOCK
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    s,a,b,c = map(int, input().split())
    stock_current_price = s+(s*(c/100))
    if stock_current_price >= a and stock_current_price <= b:
        print("Yes")
    else:
        print("No")


