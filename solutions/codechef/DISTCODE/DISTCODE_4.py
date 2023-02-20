# DATE: 25/01/2023, 07:23:00
# PROBLEM NAME: Distinct Codes
# PROBLEM URL: https://www.codechef.com/problems/DISTCODE
# PROBLEM DIFFICULTY RATTING: 1234
# STATUS: accepted
# TIME: 0.24
# MEMORY: 9.7M

for _ in range(int(input())):
    s = input()
    cc_set = set()

    for i in range(len(s) - 1):
        cc = s[i:i+2]
        cc_set.add(cc)

    print(len(cc_set))


