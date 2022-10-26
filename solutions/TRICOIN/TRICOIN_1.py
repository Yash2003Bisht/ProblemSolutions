# QUESTION URL: https://www.codechef.com/problems/TRICOIN

for _ in range(int(input())):
    n = int(input())
    height = 1
    while True:
        if height*(height+1)/2 > n:
            print(height-1)
            break
        height += 1

