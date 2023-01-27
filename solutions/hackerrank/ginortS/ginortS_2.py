# QUESTION URL: https://www.hackerrank.com/challenges/ginorts/problem
# STATUS: Accepted

s = input()
lower_case = sorted(filter(lambda x:x.islower(), s))
upper_case = sorted(filter(lambda x:x.isupper(), s))
even_numeric = sorted(filter(lambda x:x.isnumeric() and int(x)%2 == 0, s))
odd_numeric = sorted(filter(lambda x:x.isnumeric() and int(x)%2 == 1, s))

print("".join(lower_case + upper_case + odd_numeric + even_numeric))
