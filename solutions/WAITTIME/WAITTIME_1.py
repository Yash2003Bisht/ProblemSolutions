# QUESTION URL: https://www.codechef.com/problems/WAITTIME
# STATUS: accepted

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    total_days = x*7
    print(total_days - y)

