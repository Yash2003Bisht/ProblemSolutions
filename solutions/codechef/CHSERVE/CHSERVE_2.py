# QUESTION URL: https://www.codechef.com/problems/CHSERVE
# STATUS: accepted
# TIME: 0.50
# MEMORY: 9.5M

for _ in range(int(input())):
    p1, p2, k = map(int, input().split())
    crr_serve_number = (p1+p2) // k
    
    if crr_serve_number % 2 == 0:
        print("CHEF")
    else:
        print("COOK")

