# DATE: 24/03/2023, 08:09:59
# PROBLEM NAME: Favourite String of Chef
# PROBLEM URL: https://www.codechef.com/problems/CHEFFAV
# PROBLEM DIFFICULTY RATTING: 1284
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    s = input()
    
    if "chef" in s:
        s = s.split("chef")
        
        if "code" in s[0]:
            print("AC")
        else:
            print("WA")
        
    else:
        print("WA")


