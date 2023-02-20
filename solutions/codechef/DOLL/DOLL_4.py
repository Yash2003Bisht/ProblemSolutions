# DATE: 02/08/2022, 07:21:51
# PROBLEM NAME: Red Light, Green Light
# PROBLEM URL: https://www.codechef.com/problems/DOLL
# PROBLEM DIFFICULTY RATTING: 984
# STATUS: accepted
# TIME: 0.76
# MEMORY: 9.7M

for _ in range(int(input())):
    n, k = map(int, input().split(" "))
    h = list(map(int, input().split(" ")))
    minimum_shot = [1 for i in h if i > k]
    print(sum(minimum_shot))

