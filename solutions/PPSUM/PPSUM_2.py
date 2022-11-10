# QUESTION URL: https://www.codechef.com/problems/PPSUM
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    print(sum(range(1, a*b+1)))

