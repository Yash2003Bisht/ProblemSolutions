# QUESTION URL: https://www.codechef.com/problems/CHEFSTEP
# STATUS: accepted
# TIME: 0.22
# MEMORY: 9.8M

for _ in range(int(input())):
    n, k = map(int, input().split())
    d = list(map(int, input().split()))
    print(''.join(map(lambda i: '1' if i%k == 0 else '0', d)))
    

