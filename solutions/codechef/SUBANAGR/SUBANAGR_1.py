# DATE: 21/02/2023, 08:45:56
# PROBLEM NAME: Subanagrams
# PROBLEM URL: https://www.codechef.com/problems/SUBANAGR
# PROBLEM DIFFICULTY RATTING: 1239
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

a = None
for _ in range(int(input())):
    if a is None:
        a = input()
    else:
        b = input()
        temp  = ""
        
        for i in set(a):
            temp += i*min(a.count(i), b.count(i))
        
        a = temp

if a == "":
    print("no such string")
else:
    print("".join(sorted(a)))


