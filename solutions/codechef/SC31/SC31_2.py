# QUESTION URL: https://www.codechef.com/problems/SC31
# STATUS: accepted
# TIME: 0.59
# MEMORY: 12.6M

for _ in range(int(input())):
    n = int(input())
    a = []
    ans = 0
    
    for _ in range(n):
        a.append(int(input(), 2))
    
    for i in a:
        ans ^= i

    print(bin(ans).count("1"))

# NOTE: The second argument in int is base, default is set to 10 [0-9].


