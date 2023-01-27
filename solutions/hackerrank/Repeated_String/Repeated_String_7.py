# QUESTION URL: https://www.hackerrank.com/challenges/repeated-string/problem
# STATUS: Wrong Answer

s = input()
n = int(input())

if 'a' not in s:
    print(0)

elif n%len(s) == 0:
    print(s.count('a')+(s.count('a')*((n-len(s))//len(s))))

else:
    print(s.count('a')+(s.count('a')*((n-len(s))//len(s)))+n%len(s))
