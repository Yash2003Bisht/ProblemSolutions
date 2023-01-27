# QUESTION URL: https://www.hackerrank.com/challenges/introduction-to-regex/problem
# STATUS: Wrong Answer

for _ in range(int(input())):
    try:
        n = input()
        try_float = float(n)
        if '.' in n:
            print(True)
    except Exception:
        print(False)
