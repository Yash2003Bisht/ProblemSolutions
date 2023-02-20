# DATE: 05/09/2022, 06:33:52
# PROBLEM NAME: WA Test Cases
# PROBLEM URL: https://www.codechef.com/problems/WATESTCASES
# PROBLEM DIFFICULTY RATTING: 976
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    s = list(map(int, input().split()))
    v = input()
    smallest = 101
    for i in range(len(v)):
        if v[i] == '0' and smallest > s[i]:
            smallest = s[i]
    print(smallest)
            

