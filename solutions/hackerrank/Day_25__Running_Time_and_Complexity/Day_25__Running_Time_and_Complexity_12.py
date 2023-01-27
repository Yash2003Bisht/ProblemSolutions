# QUESTION URL: https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem
# STATUS: Wrong Answer

# Enter your code here. Read input from STDIN. Print output to STDOUT

def prime(num):
    
    if num == 1:
        print("Not Prime")
        return
    
    for i in range(2, num):
        if num%i == 0:
            print("Not prime")
            return
    print("Prime")


T = int(input())
for _ in range(T):
    n = int(input())
    prime(n)
