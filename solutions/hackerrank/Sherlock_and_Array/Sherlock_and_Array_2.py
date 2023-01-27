# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sherlock-and-array/problem
# STATUS: Accepted

import os

def balancedSums(arr):
    # Write your code here
    total = sum(arr)
    equal = 0
    
    for i in arr:
        if equal == total - equal - i:
            return "YES"
        elif equal > total//2:
            return "NO"
        equal += i 
        
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
