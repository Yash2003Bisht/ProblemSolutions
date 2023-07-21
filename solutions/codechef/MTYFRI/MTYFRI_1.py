# DATE: 21/07/2023, 08:59:07
# PROBLEM NAME: Mighty Friend
# PROBLEM URL: https://www.codechef.com/problems/MTYFRI
# PROBLEM DIFFICULTY RATTING: 1406
# STATUS: accepted
# TIME: 0.23
# MEMORY: 11.3M

for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    tomu = [score for idx, score in enumerate(arr) if idx%2 != 0]
    motu = [score for idx, score in enumerate(arr) if idx%2 == 0]

    tomu.sort()
    motu.sort(reverse=True)
    
    for i in range(len(tomu)):
        if tomu[i] < motu[i] and k > 0:
            tomu[i], motu[i] = motu[i], tomu[i]
            k -= 1

    if sum(tomu) > sum(motu):
        print("YES")
    else:
        print("NO")


