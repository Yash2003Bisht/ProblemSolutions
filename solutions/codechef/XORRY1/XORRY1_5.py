# DATE: 02/02/2024, 01:47:16
# PROBLEM NAME: Xorry 1
# PROBLEM URL: https://www.codechef.com/problems/XORRY1
# PROBLEM DIFFICULTY RATTING: 1472
# STATUS: accepted
# TIME: 1.04
# MEMORY: 8.7M

for _ in range(int(input())):
    x = int(input())
    x_binary = bin(x).replace("0b", "")
    a = ""
    b = ""

    if x_binary.count("1") <= 1:
        print(0, x)
    else:
        for i in x_binary[1:]:
            b += i
        a = "1" + ("0" * (len(x_binary) - 1))
        print(int(b, 2), int(a, 2))


