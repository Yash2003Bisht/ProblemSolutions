# DATE: 29/11/2022, 06:25:52
# PROBLEM NAME: Chef and Steps
# PROBLEM URL: https://www.codechef.com/problems/CHEFSTEP
# PROBLEM DIFFICULTY RATTING: 1110
# STATUS: runtime error(NZEC)
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(sys.stdin.readline())):
    n, k = map(int, sys.stdin.readline().split())
    d = list(map(int, sys.stdin.readline().split()))
    print(''.join(['1' if i%k == 0 else '0' for i in d]))


