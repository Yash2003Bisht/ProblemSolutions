# QUESTION URL: https://www.codechef.com/problems/SIXFRIENDS

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print(min(n*3, x*2))

