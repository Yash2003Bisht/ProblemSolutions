# QUESTION URL: https://www.codechef.com/problems/HOLES
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

