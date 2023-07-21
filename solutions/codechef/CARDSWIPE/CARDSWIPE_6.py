# DATE: 21/07/2023, 10:40:32
# PROBLEM NAME: Card Swipe
# PROBLEM URL: https://www.codechef.com/problems/CARDSWIPE
# PROBLEM DIFFICULTY RATTING: 1172
# STATUS: time limit exceeded
# TIME: -
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    swipes = list(map(int, input().split()))
    swipes_counter = []
    count = 0
    max_count = 0
    
    for swipe in swipes:
        if swipe not in swipes_counter:
            swipes_counter.append(swipe)
            count += 1
        else:
            swipes_counter.remove(swipe)
            count -= 1
            
        max_count = max(max_count, count)
    
    print(max_count)


