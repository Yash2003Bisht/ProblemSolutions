# QUESTION URL: https://www.codechef.com/problems/CHEFNWRK
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.7M

for _ in range(int(input())):
    n,k = map(int,input().split())
    w = list(map(int, input().split()))
    if max(w) > k:
        print(-1)
    else:
        trip = 0
        box = 0
        for i in w:
            if box+i > k:
                box = i
                trip += 1
            else:
                box += i
        print(trip+1 if box > 0 else trip)


