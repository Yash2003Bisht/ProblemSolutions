# QUESTION URL: https://www.codechef.com/problems/POPCORN
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

for _ in range(int(input())):
    a = sum(map(int, input().split(" ")))
    b = sum(map(int, input().split(" ")))
    c = sum(map(int, input().split(" ")))
    print(max(a,b,c))

