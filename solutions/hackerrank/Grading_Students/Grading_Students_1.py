# QUESTION URL: https://www.hackerrank.com/challenges/grading/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#

def gradingStudents(grades):
    # Write your code here
    new_grades = []
    round_gardes = []
    for i in grades:
        while i%5 != 0:
            i += 1
        new_grades.append(i)
    for i, oi in zip(grades, new_grades):
        if (oi - i) >= 3 or i < 38:
            round_gardes.append(i)
        else:
            round_gardes.append(oi)

    return round_gardes
            
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
