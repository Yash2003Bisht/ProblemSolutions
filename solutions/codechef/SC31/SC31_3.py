# QUESTION URL: https://www.codechef.com/problems/SC31
# STATUS: accepted
# TIME: 0.63
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    a = ""
    b = ""

    for _ in range(n):
        if a == "":
            a = int(input(), 2)
        else:
            b = int(input(), 2)

        if a != "" and b != "":
            a ^= b

    print(bin(a).count("1"))


