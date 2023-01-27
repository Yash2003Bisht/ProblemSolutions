# QUESTION URL: https://www.hackerrank.com/challenges/pangrams/problem
# STATUS: Accepted

from string import ascii_lowercase
s = input().lower()
print("pangram" if sum([1 for i in ascii_lowercase if i in s]) == len(ascii_lowercase) else "not pangram")
