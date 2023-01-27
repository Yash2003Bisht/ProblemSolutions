# QUESTION URL: https://www.hackerrank.com/challenges/no-idea/problem
# STATUS: Terminated due to timeout

# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = map(int, input().split(' '))
array = map(int, input().split(' '))
a = list(map(int, input().split(' ')))
b = list(map(int, input().split(' ')))
b_total = 0
a_total = 0
for i in array:
    if i in a:
        a_total += 1    
    else:
        b_total += 1

print(a_total-b_total)
