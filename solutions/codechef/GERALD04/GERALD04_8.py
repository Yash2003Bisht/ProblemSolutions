# DATE: 08/08/2023, 07:30:46
# PROBLEM NAME: Chef and Girlfriend
# PROBLEM URL: https://www.codechef.com/problems/GERALD04
# PROBLEM DIFFICULTY RATTING: 1421
# STATUS: accepted
# TIME: 0.07
# MEMORY: 7.9M

for _ in range(int(input())):
    friend_hour, friend_min = map(int, input().split(":"))
    chef_hour, chef_min = map(int, input().split(":"))
    dist = int(input())
    plan1, plan2 = 0, 0
    
    plan1 = (friend_hour - chef_hour)*60 + (friend_min  - chef_min)
    
    if dist*2 <= plan1:
        plan2 = plan1
    else:
        return_time = plan1 - dist
        plan2 = dist + return_time + (dist - return_time) / 2

    print(f"{(plan1 + dist):.1f} {plan2:.1f}")


