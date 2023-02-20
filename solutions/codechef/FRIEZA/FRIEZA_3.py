# DATE: 03/10/2022, 06:22:02
# PROBLEM NAME: Immortal Frieza
# PROBLEM URL: https://www.codechef.com/problems/FRIEZA
# PROBLEM DIFFICULTY RATTING: 1172
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.8M

for _ in range(int(input())):
    s = input()
    count = 0
    r = ''
    name = ['f','r','i','e','z','a']
    bad = False
    good = False
    for i in range(len(s)):
        if s[i] not in name:
            if good:
                r += str(count)
                count = 0
                good = False
            bad = True
        else:
            if bad:
                r += str(count)
                count = 0
                bad = False
            good = True
        
        
        count += 1
    
    if count > 0:
        r += str(count)
        
    print(r)


