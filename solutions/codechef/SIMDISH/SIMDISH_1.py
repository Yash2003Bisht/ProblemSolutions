# DATE: 24/07/2023, 08:26:20
# PROBLEM NAME: Similar Dishes
# PROBLEM URL: https://www.codechef.com/problems/SIMDISH
# PROBLEM DIFFICULTY RATTING: 1142
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    dish1 = set(input().split())
    dish2 = set(input().split())
    
    
    if len(dish1.intersection(dish2)) >= 2:
        print("similar")
    else:
        print("dissimilar")


