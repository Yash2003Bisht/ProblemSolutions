# QUESTION URL: https://www.hackerrank.com/challenges/string-validators/problem
# STATUS: Accepted


if __name__ == '__main__':
    s = input()

    for test in ['isalnum()', 'isalpha()', 'isdigit()', 'islower()', 'isupper()']:
        print(any(eval("i." + test) for i in s))
