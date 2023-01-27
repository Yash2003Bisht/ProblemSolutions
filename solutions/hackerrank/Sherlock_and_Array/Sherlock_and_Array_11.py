# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sherlock-and-array/problem
# STATUS: Wrong Answer

import os

def balancedSums(arr):
    # Write your code here
    total = sum(arr)
    equal = 0
    
    for i in range(len(arr)-1):
        equal += arr[i]    
        if equal == total - equal - arr[i+1]:
            return "YES"
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
