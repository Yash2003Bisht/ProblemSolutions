# QUESTION URL: https://www.codechef.com/problems/NEARESTCOURT
# STATUS: accepted

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    abs_value = abs(x-y)
    if abs_value%2 == 0:
        print(abs_value//2)
    else:
        print(abs_value//2 + 1)
        

