# DATE: 29/03/2023, 08:41:52
# PROBLEM NAME: Chef And His Characters
# PROBLEM URL: https://www.codechef.com/problems/CHEFCHR
# PROBLEM DIFFICULTY RATTING: 1283
# STATUS: accepted
# TIME: 0.65
# MEMORY: 10.3M

import sys

for _ in range(int(sys.stdin.readline())):
    s = sys.stdin.readline()
    count = 0

    for i in range(len(s)):
        if s[i] in "chef":
            temp = s[i:i+4]

            if 'c' in temp and 'h' in temp and 'e' in temp and 'f' in temp:
                count += 1

    if count > 0:
        sys.stdout.write(f"lovely {count}\n")
    else:
        sys.stdout.write("normal\n")


