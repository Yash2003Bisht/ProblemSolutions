# DATE: 29/03/2023, 08:36:46
# PROBLEM NAME: Chef And His Characters
# PROBLEM URL: https://www.codechef.com/problems/CHEFCHR
# PROBLEM DIFFICULTY RATTING: 1283
# STATUS: accepted
# TIME: 1.86
# MEMORY: 10.8M

for _ in range(int(input())):
    s = input()
    count = 0

    for i in range(len(s)):
        if s[i] in "chef":
            temp = "".join(sorted(s[i:i+4]))

            if "cefh" in temp:
                count += 1

    if count > 0:
        print("lovely", count)
    else:
        print("normal")


