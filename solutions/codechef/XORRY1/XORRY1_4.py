# DATE: 02/02/2024, 01:48:09
# PROBLEM NAME: Xorry 1
# PROBLEM URL: https://www.codechef.com/problems/XORRY1
# PROBLEM DIFFICULTY RATTING: 1472
# STATUS: accepted
# TIME: 0.83
# MEMORY: 8.6M

for _ in range(int(input())):
    x = int(input())
    x_binary = bin(x).replace("0b", "")

    if x_binary.count("1") <= 1:
        print(0, x)
    else:
        b = "".join(x_binary[1:])
        a = "1" + ("0" * (len(x_binary) - 1))
        print(int(b, 2), int(a, 2))


