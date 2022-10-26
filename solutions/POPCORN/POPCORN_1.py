# QUESTION URL: https://www.codechef.com/problems/POPCORN

for _ in range(int(input())):
    a = sum(map(int, input().split(" ")))
    b = sum(map(int, input().split(" ")))
    c = sum(map(int, input().split(" ")))
    print(max(a,b,c))

