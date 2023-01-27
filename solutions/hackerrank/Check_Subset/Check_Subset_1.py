# QUESTION URL: https://www.hackerrank.com/challenges/py-check-subset/problem
# STATUS: Accepted

for _ in range(int(input())):
    A = input()
    A_lst = set(map(int, input().split(' ')))
    B = input()
    B_lst = set(map(int, input().split(' ')))

    print(A_lst.issubset(B_lst))

