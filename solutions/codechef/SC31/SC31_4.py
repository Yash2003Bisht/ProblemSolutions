# DATE: 24/12/2022, 06:44:04
# PROBLEM NAME: Weapon Value
# PROBLEM URL: https://www.codechef.com/problems/SC31
# PROBLEM DIFFICULTY RATTING: 1204
# STATUS: accepted
# TIME: 1.88
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    a = ""
    b = ""

    for _ in range(n):
        if a == "":
            a = input()
        else:
            b = input()

        if a != "" and b != "":
            temp = ""
            for i, j in zip(a, b):
                if i != j:
                    temp += "1"
                else:
                    temp += "0"

            a = temp

    print(a.count("1"))


