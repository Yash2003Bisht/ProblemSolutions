# QUESTION URL: https://www.codechef.com/problems/SIMPSTAT
# STATUS: accepted
# TIME: 0.28
# MEMORY: 11.4M

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    
    a = a[k:n-k]

    print(f"{sum(a) / len(a):.6f}")


