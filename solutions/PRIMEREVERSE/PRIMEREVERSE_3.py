# QUESTION URL: https://www.codechef.com/problems/PRIMEREVERSE
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    
    if a.count('1') == b.count('1') and a.count('0') == b.count('0'):
        print("YES")
    else:
        print("NO")


