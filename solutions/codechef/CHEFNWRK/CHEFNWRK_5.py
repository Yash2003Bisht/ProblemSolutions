# DATE: 09/09/2022, 05:48:19
# PROBLEM NAME: Chef and Work
# PROBLEM URL: https://www.codechef.com/problems/CHEFNWRK
# PROBLEM DIFFICULTY RATTING: 1185
# STATUS: time limit exceeded
# TIME: -
# MEMORY: 9.5M

for _ in range(int(input())):
    n,k = map(int,input().split())
    w = list(map(int, input().split()))
    if sum(w) <= k:
        print(1)
    elif n == 1 and w[0] > k:
        print(-1)
    else:
        boxsum = 0
        i = 0
        trip = 0
        while i<n:
            if boxsum+w[i] > k:
                i -= 1
                boxsum = 0
                trip += 1
            else:
                boxsum += w[i]
            i += 1
        print(trip if boxsum==0 else trip+1)

