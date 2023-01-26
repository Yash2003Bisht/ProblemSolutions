# QUESTION URL: https://www.codechef.com/problems/PLAYSTR
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    input()
    s = input()
    r = input()
    
    if s.count('1') == r.count('1') and s.count('0') == r.count('0'):
        print("YES")
    else:
        print("NO")
    

