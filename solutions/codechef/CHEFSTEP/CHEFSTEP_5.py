# QUESTION URL: https://www.codechef.com/problems/CHEFSTEP
# STATUS: runtime error(NZEC)
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(sys.stdin.readline())):
    n, k = map(int, sys.stdin.readline().split())
    d = list(map(int, sys.stdin.readline().split()))
    print(''.join(['1' if i%k == 0 else '0' for i in d]))


