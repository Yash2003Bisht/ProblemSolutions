# QUESTION URL: https://www.codechef.com/problems/BALLOON
# STATUS: accepted
# TIME: 0.12
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    end = 7

    while(True):
        for i in range(1, 8):
            if i not in a[:end]:
                end += 1
                break
        else:
            break
    
    print(end)

