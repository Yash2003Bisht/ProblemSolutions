# QUESTION URL: https://www.hackerrank.com/challenges/30-review-loop/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
lst = [input() for _ in range(n)]
odd = []
even = []

for i in lst:
    for r,q in enumerate(i):
        if r%2 == 0:
            even.append(q)
        else:
            odd.append(q)
    
    for i in even: 
        print(i, end="")
    print("", end=" ")
    for i in odd:
        print(i, end="")
    print()
    even.clear()
    odd.clear()
