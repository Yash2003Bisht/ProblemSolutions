# QUESTION URL: https://www.codechef.com/problems/WATESTCASES

for _ in range(int(input())):
    n = int(input())
    s = list(map(int, input().split()))
    v = input()
    smallest = 101
    for i in range(len(v)):
        if v[i] == '0' and smallest > s[i]:
            smallest = s[i]
    print(smallest)
            

