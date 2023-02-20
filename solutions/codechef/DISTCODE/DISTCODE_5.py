# DATE: 25/01/2023, 07:19:29
# PROBLEM NAME: Distinct Codes
# PROBLEM URL: https://www.codechef.com/problems/DISTCODE
# PROBLEM DIFFICULTY RATTING: 1234
# STATUS: accepted
# TIME: 1.68
# MEMORY: 9.6M

for _ in range(int(input())):
    s = input()
    lst = []

    for i in range(len(s) - 1):
        cc = s[i:i+2]

        if cc not in lst:
            lst.append(cc)

    print(len(lst))


