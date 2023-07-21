# DATE: 21/07/2023, 10:42:06
# PROBLEM NAME: Card Swipe
# PROBLEM URL: https://www.codechef.com/problems/CARDSWIPE
# PROBLEM DIFFICULTY RATTING: 1172
# STATUS: accepted
# TIME: 0.88
# MEMORY: 49.4M

for _ in range(int(input())):
    n = int(input())
    swipes = list(map(int, input().split()))
    swipes_counter = {}
    count = 0
    max_count = 0

    for swipe in swipes:
        if not swipes_counter.get(swipe):
            swipes_counter[swipe] = 1
            count += 1
        else:
            del swipes_counter[swipe]
            count -= 1

        max_count = max(max_count, count)

    print(max_count)


