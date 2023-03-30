# DATE: 29/03/2023, 08:38:25
# PROBLEM NAME: Chef And His Characters
# PROBLEM URL: https://www.codechef.com/problems/CHEFCHR
# PROBLEM DIFFICULTY RATTING: 1283
# STATUS: accepted
# TIME: 1.12
# MEMORY: 10.4M

import sys

for _ in range(int(sys.stdin.readline())):
    s = sys.stdin.readline()
    count = 0

    for i in range(len(s)):
        if s[i] in "chef":
            temp = "".join(sorted(s[i:i+4]))

            if "cefh" in temp:
                count += 1

    if count > 0:
        sys.stdout.write("lovely {}\n".format(count))
    else:
        sys.stdout.write("normal\n")


