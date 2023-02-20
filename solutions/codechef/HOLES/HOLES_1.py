# DATE: 09/09/2022, 06:41:31
# PROBLEM NAME: Holes in the text
# PROBLEM URL: https://www.codechef.com/problems/HOLES
# PROBLEM DIFFICULTY RATTING: 1093
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    s = input()
    holes = ['A', 'D', 'O', 'P', 'Q', 'R']
    count = 0
    
    for i in s:
        if i in holes:
            count += 1
        elif i == 'B':
            count += 2
    
    print(count)

