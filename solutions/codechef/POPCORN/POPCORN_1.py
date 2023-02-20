# DATE: 02/08/2022, 07:01:51
# PROBLEM NAME: Vishesh and his Popcorn Combo
# PROBLEM URL: https://www.codechef.com/problems/POPCORN
# PROBLEM DIFFICULTY RATTING: 990
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

for _ in range(int(input())):
    a = sum(map(int, input().split(" ")))
    b = sum(map(int, input().split(" ")))
    c = sum(map(int, input().split(" ")))
    print(max(a,b,c))

