# QUESTION URL: https://www.codechef.com/problems/POPCORN

for _ in range(int(input())):
    a1, a2 = map(int, input().split(" "))
    b1, b2 = map(int, input().split(" "))
    c1, c2 = map(int, input().split(" "))
    a = a1+a2
    b = b1+b2
    c = c1+c2
    print(max(a,b,c))

