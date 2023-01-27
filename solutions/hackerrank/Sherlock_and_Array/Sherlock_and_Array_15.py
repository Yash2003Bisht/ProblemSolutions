# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sherlock-and-array/problem
# STATUS: Accepted

import os


def balancedSums(arr):
    # Write your code here
    tot = sum(arr)
    add = 0
    for element in arr:
        if add == tot-element-add:
            return "YES"
        add+=element
    return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    T = int(input().strip())

    for T_itr in range(T):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = balancedSums(arr)

        fptr.write(result + '\n')

    fptr.close()
