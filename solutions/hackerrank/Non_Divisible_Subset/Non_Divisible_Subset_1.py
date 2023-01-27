# QUESTION URL: https://www.hackerrank.com/challenges/non-divisible-subset/problem
# STATUS: Wrong Answer

from itertools import product
n, k = map(int, input().split(" "))
s = list(map(int, input().split(" ")))

def nonDivisibleSubset(s):
    dict_counter = {}
    lst = []
    for i in s:
        if len(lst) == 0:
            lst.append(i)
        else:
            for j in product(lst,[i]):
                if sum(j) % k == 0:
                    dict_counter[j] = j[1]
                    break
            else:
                lst.append(i)
    return dict_counter, lst


a, b = nonDivisibleSubset(s)
print(a)
print(b)


