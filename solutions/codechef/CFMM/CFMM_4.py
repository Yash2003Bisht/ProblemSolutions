# QUESTION URL: https://www.codechef.com/problems/CFMM
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.8M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    s = ""

    for _ in range(n):
        s += input()

    meal_counter = Counter(s)
    meal_counter['c'] = meal_counter['c'] // 2
    meal_counter['e'] = meal_counter['e'] // 2
    lst = [
            meal_counter['c'],
            meal_counter['o'],
            meal_counter['d'],
            meal_counter['h'],
            meal_counter['e'],
            meal_counter['f']
        ]
    
    print(min(lst))



