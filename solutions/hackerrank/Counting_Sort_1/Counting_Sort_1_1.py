# QUESTION URL: https://www.hackerrank.com/challenges/countingsort1/problem
# STATUS: Wrong Answer

input()
lst = list(map(int, input().rstrip().split(" ")))
for number in range(len(lst)):
    print(lst.count(number), end=" ")
