# QUESTION URL: https://www.codechef.com/problems/EXUNA
# STATUS: accepted
# TIME: 0.44
# MEMORY: 84.7M

for _ in range(int(input())):
    n = input()
    a = list(map(int, input().split()))
    print(min(a) % max(a))

