# QUESTION URL: https://www.codechef.com/problems/TIDRICE
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    user_ids = {}
    votes = 0
    
    for i in range(n):
        user, vote = input().split()
        user_ids[user] = 1 if vote == '+' else -1
    
    for vote in user_ids.values():
        votes += vote
    
    print(votes)
    

