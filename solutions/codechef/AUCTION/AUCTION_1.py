# DATE: 29/07/2022, 06:46:33
# PROBLEM NAME: Bidding
# PROBLEM URL: https://www.codechef.com/problems/AUCTION
# PROBLEM DIFFICULTY RATTING: 330
# STATUS: accepted
# TIME: 0.03
# MEMORY: 8.9M

for _ in range(int(input())):
    a, b, c = map(int, input().split(" "))
    max_bid = max([a, b, c])
    if max_bid == a:
        print("Alice")
    elif max_bid == b:
        print("Bob")
    else:
        print("Charlie")

