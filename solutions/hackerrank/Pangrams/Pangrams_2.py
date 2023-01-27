# QUESTION URL: https://www.hackerrank.com/challenges/pangrams/problem
# STATUS: Accepted

from string import ascii_lowercase
s = input().lower()

counter = 0
for i in ascii_lowercase:
    if i in s:
        counter += 1

if counter == len(ascii_lowercase):
    print("pangram")
else:
    print("not pangram")
