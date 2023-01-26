# QUESTION URL: https://www.codechef.com/problems/ICL1902
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())
    count = 0
    
    while n != 0:
        highest_square = int(n ** 0.5)
        n -= highest_square * highest_square
        count += 1
    print(count)


