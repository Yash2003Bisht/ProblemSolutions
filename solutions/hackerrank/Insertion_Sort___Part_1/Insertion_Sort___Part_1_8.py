# QUESTION URL: https://www.hackerrank.com/challenges/insertionsort1/problem
# STATUS: Wrong Answer

n = int(input())
array = list(map(int, input().split(" ")))
right_most_element = array[n-1]
for i in range(n - 2, -1, -1):
    if array[i] > right_most_element:
        array.insert(n-1, array[i])
        n -= 1
        array.pop(n + 1)
    else:
        array.pop(n-1)
        array.insert(n-1, right_most_element)
    print(" ".join(list(map(str, array))))
