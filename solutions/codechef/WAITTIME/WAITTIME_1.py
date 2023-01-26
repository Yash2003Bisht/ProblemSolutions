# QUESTION URL: https://www.codechef.com/problems/WAITTIME
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    total_days = x*7
    print(total_days - y)

