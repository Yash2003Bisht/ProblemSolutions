# QUESTION URL: https://www.codechef.com/problems/AIRHOCKEY
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print(7 - max(n, x))

