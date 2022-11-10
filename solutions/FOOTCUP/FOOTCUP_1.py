# QUESTION URL: https://www.codechef.com/problems/FOOTCUP
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print("yes" if n == x and n >= 1 else "no")

