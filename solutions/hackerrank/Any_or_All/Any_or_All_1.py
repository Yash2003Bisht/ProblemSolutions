# QUESTION URL: https://www.hackerrank.com/challenges/any-or-all/problem
# STATUS: Accepted

n = input()
lst = input().split()

print(all([any(i == i[::-1] for i in lst), all(int(i) >= 0 for i in lst)]))
