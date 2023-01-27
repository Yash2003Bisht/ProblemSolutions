# QUESTION URL: https://www.hackerrank.com/challenges/exceptions/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
t = int(input())
for i in range(t):
    n,d = input().split(" ")

    try:
        print(int(n)//int(d))
    except ZeroDivisionError as e:
        print("Error Code: {}".format(e))
    except ValueError as e:
        print("Error Code: {}".format(e))
