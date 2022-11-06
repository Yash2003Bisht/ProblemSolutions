# QUESTION URL: https://www.codechef.com/problems/PPSUM
# STATUS: wrong answer

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    print(sum(range(1, a*b+1)))

