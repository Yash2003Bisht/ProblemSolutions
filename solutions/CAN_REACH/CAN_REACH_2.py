# QUESTION URL: https://www.codechef.com/problems/CAN_REACH
# STATUS: wrong answer

for _ in range(int(input())):
    x, y, k = map(int, input().split(" "))
    if x%k == 0 or y%k == 0:
        print("YES")
    else:
        print("NO")

