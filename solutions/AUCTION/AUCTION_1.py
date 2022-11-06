# QUESTION URL: https://www.codechef.com/problems/AUCTION
# STATUS: accepted

for _ in range(int(input())):
    a, b, c = map(int, input().split(" "))
    max_bid = max([a, b, c])
    if max_bid == a:
        print("Alice")
    elif max_bid == b:
        print("Bob")
    else:
        print("Charlie")

