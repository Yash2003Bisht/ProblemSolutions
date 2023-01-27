# QUESTION URL: https://www.hackerrank.com/challenges/string-validators/problem
# STATUS: Accepted


if __name__ == '__main__':
    s = input()

    for func in [str.isalnum, str.isalpha, str.isdigit, str.islower, str.isupper]:
        print(any(func(i) for i in s))
