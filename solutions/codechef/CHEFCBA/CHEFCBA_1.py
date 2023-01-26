# QUESTION URL: https://www.codechef.com/problems/CHEFCBA
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

a, b, c, d = map(int, input().split())

if a*b == c*d or a*c == b*d or a*d == c*b:
    print("Possible")
else:
    print("Impossible")

