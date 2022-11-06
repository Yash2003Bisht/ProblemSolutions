# QUESTION URL: https://www.codechef.com/problems/AIRHOCKEY
# STATUS: accepted

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print(7 - max(n, x))

