# QUESTION URL: https://www.codechef.com/problems/M1ENROL
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

for _ in range(int(input())):
    x, y = map(int, input(" ").split(" "))
    print(max(0, y-x))

