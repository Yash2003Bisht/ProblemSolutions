# QUESTION URL: https://www.codechef.com/problems/CHEFNWRK
# STATUS: time limit exceeded

for _ in range(int(input())):
    n,k = map(int,input().split())
    w = list(map(int, input().split()))
    if sum(w) <= k:
        print(1)
    elif n == 1 and w[0] > k:
        print(-1)
    else:
        trip = 0
        i = 0
        box = 0
        while i < n:
            if box+w[i] <= k:
                box += w[i]
                i += 1
            else:
                box = 0
                trip += 1
        print(trip+1 if box > 0 else trip)


