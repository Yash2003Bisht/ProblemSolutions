# QUESTION URL: https://www.codechef.com/problems/UWCOI20A
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    max_mountain = 0
    for _ in range(n):
        mountain = int(input())
        if mountain > max_mountain:
            max_mountain = mountain
    
    print(max_mountain)

