# QUESTION URL: https://www.hackerrank.com/challenges/introduction-to-regex/problem
# STATUS: Accepted

for _ in range(int(input())):
    try:
        n = input()
        try_float = float(n)
        if '.' in n:
            print(True)
        else:
            print(False)
    except Exception:
        print(False)
