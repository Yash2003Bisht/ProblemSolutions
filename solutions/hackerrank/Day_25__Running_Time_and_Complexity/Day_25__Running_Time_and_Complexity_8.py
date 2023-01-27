# QUESTION URL: https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT

def prime(num):
    
    if num == 1:
        print("Not prime")
        return
    
    for i in range(2, 1000):
        if num%i == 0 and num != i:
            print("Not prime")
            return
    print("Prime")


T = int(input())
for _ in range(T):
    n = int(input())
    prime(n)
