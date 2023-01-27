# QUESTION URL: https://www.hackerrank.com/challenges/insertionsort1/problem
# STATUS: Runtime Error

n = int(input())
array = input().split(" ")
right_most_element = array[n-1]
flag = False
i = n-2
while flag is not True:
    if array[i] > right_most_element:
        array.insert(n-1, array[i])
        n -= 1
        array.pop(n + 1)
    else:
        array.pop(n-1)
        array.insert(n-1, right_most_element)
        flag = True
    print(" ".join(array))
    i -= 1
