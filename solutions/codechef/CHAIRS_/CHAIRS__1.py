# QUESTION URL: https://www.codechef.com/problems/CHAIRS_
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print(x - y if x > y else 0)

