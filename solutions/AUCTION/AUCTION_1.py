# QUESTION URL: https://www.codechef.com/problems/AUCTION
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

