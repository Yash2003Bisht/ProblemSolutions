# DATE: 07/02/2023, 08:25:45
# PROBLEM NAME: Popular Rice Recipe
# PROBLEM URL: https://www.codechef.com/problems/TIDRICE
# PROBLEM DIFFICULTY RATTING: 1247
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    user_ids = {}
    votes = 0
    
    for i in range(int(input())):
        user, vote = input().split()
        user_ids[user] = 1 if vote == '+' else -1

    votes = sum(user_ids.values())
    
    print(votes)


