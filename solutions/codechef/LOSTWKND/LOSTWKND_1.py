# QUESTION URL: https://www.codechef.com/problems/LOSTWKND
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    d = list(map(int, input().split()))
    p = d[5]
    if sum(d[:len(d)-1])*p > 120:
        print("Yes")
    else:
        print("No")
    

