# QUESTION URL: https://www.codechef.com/problems/SSUBSTR
# STATUS: accepted
# TIME: 0.13
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    s = input()
    total = [1 for i in range(n-1) if s[i] == '1' and s[i+1] == '0']
    print(sum(total))

