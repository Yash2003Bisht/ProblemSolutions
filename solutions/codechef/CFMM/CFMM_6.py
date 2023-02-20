# DATE: 31/12/2022, 03:26:21
# PROBLEM NAME: Making a Meal
# PROBLEM URL: https://www.codechef.com/problems/CFMM
# PROBLEM DIFFICULTY RATTING: 1214
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    s = ""
    meal = "codhef"

    for _ in range(n):
        s += input()

    meal_counter = {i: s.count(i) for i in meal}
    meal_counter['c'] = meal_counter['c'] // 2
    meal_counter['e'] = meal_counter['e'] // 2
    
    print(min(meal_counter.values()))



