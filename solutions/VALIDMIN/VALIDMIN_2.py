# QUESTION URL: https://www.codechef.com/problems/VALIDMIN
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    a, b, c = map(int, input().split(" "))
    if min(a, b) <= min(b, c) <= min(c,a):
        print("YES")
    else:
        print("NO")

