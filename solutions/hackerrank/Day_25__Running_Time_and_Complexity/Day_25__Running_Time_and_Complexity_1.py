# QUESTION URL: https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem
# STATUS: Wrong Answer

# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

def prime(num):
    
    if num == 1:
        print("Not prime")
        quit()
    
    for i in range(2, int(math.sqrt(num))+1):
        if num%i == 0:
            print("Not prime")
            break
    else:
        print("Prime")


T = int(input())
for _ in range(T):
    n = int(input())
    prime(n)
