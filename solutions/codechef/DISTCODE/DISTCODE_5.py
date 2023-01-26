# QUESTION URL: https://www.codechef.com/problems/DISTCODE
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


