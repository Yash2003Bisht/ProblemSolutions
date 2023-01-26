# QUESTION URL: https://www.codechef.com/problems/TRICOIN
# STATUS: accepted
# TIME: 0.67
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    height = 1
    while True:
        if height*(height+1)/2 > n:
            print(height-1)
            break
        height += 1

