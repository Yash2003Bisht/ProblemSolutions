# QUESTION URL: https://www.codechef.com/problems/CALPOWER
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    s = input()
    print(sum([(idx+1)*((ord(alpha) - 97) + 1) for idx, alpha in enumerate(sorted(s))]))


