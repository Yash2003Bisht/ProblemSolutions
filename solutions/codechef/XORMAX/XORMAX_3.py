# QUESTION URL: https://www.codechef.com/problems/XORMAX
# STATUS: accepted
# TIME: 0.10
# MEMORY: 11.7M

for _ in range(int(input())):
    a = input()
    b = input()
    s = ""
    min_value = min(a.count('0') + b.count('0'), a.count('1') + b.count('1'))

    for _ in range(min_value): s += "1"
    for _ in range(min_value, len(a)): s += "0"

    print(s)


