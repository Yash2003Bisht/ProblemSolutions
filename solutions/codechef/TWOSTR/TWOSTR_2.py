# DATE: 14/02/2023, 07:28:18
# PROBLEM NAME: Chef and the Wildcard Matching
# PROBLEM URL: https://www.codechef.com/problems/TWOSTR
# PROBLEM DIFFICULTY RATTING: 1254
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    x = input()
    y = input()
    
    for chr_x, chr_y in zip(x, y):
        
        if chr_x != chr_y and chr_x != "?" and chr_y != "?":
           print("No")
           break
        
    else:
        print("Yes")


