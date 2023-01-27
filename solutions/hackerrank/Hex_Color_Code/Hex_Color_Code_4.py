# QUESTION URL: https://www.hackerrank.com/challenges/hex-color-code/problem
# STATUS: Wrong Answer

import re
for _ in range(int(input())):
    for i in re.findall(r"[#A-Fa-f\d]{3,7}[;|,]", input()):
        print(i[0:len(i)-1])
