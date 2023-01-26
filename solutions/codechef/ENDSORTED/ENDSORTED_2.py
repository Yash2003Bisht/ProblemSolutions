# QUESTION URL: https://www.codechef.com/problems/ENDSORTED
# STATUS: accepted
# TIME: 0.07
# MEMORY: 25M

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    if p[0] == 1 and p[n-1] == max(p):
        print(0)
    else:
        first_index = p.index(1)
        last_index = p.index(max(p))
        if first_index < last_index:
            print(first_index+(n-last_index-1))
        else:
            print(first_index+(n-last_index-2))

