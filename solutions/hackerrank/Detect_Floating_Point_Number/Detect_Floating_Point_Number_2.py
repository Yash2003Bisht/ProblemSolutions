# QUESTION URL: https://www.hackerrank.com/challenges/introduction-to-regex/problem
# STATUS: Runtime Error

for _ in range(int(input())):
    n = input()
    if len(n) > 1 and n.split(".")[1].isdigit() and "." in n and len(n.split(".")[1]) > 1:
        print(True)
    else:
        print(False)
