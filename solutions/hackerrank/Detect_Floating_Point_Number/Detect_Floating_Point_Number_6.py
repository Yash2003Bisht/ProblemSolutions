# QUESTION URL: https://www.hackerrank.com/challenges/introduction-to-regex/problem
# STATUS: Runtime Error

for _ in range(int(input())):
    n = input()
    if not n[1].isdigit() or not n.split(".")[1].isdigit():
        print(False)
    else:
        print(True)
