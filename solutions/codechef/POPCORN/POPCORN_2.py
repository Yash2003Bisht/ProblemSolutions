# DATE: 02/08/2022, 07:00:36
# PROBLEM NAME: Vishesh and his Popcorn Combo
# PROBLEM URL: https://www.codechef.com/problems/POPCORN
# PROBLEM DIFFICULTY RATTING: 990
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

for _ in range(int(input())):
    a1, a2 = map(int, input().split(" "))
    b1, b2 = map(int, input().split(" "))
    c1, c2 = map(int, input().split(" "))
    a = a1+a2
    b = b1+b2
    c = c1+c2
    print(max(a,b,c))

