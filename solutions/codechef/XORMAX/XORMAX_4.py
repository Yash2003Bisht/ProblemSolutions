# DATE: 21/12/2022, 07:16:12
# PROBLEM NAME: Maximise XOR
# PROBLEM URL: https://www.codechef.com/problems/XORMAX
# PROBLEM DIFFICULTY RATTING: 1229
# STATUS: accepted
# TIME: 0.09
# MEMORY: 11.8M

for _ in range(int(input())):
    a = input()
    b = input()
    total_0 = a.count('0') + b.count('0')
    total_1 = a.count('1') + b.count('1')
    s = ""
    
    min_0_1 = min(total_0, total_1)
    
    for _ in range(min_0_1):
        s += "1"
    
    for _ in range(min_0_1, len(a)):
        s += "0"
    
    print(s)


