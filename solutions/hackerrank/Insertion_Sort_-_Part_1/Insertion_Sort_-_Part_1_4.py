# QUESTION URL: https://www.hackerrank.com/challenges/insertionsort1/problem
# STATUS: Accepted

n = int(input())
array = input().split(" ")
right_most_element = array[n-1]
i = n-2
flag = False
while True:
    if array[i] > right_most_element:
        array[n-1] = array[i]
        n -= 1
        if i == 0:
            flag = True
            print(" ".join(array))
    if array[i] < right_most_element or flag:
        array.pop(n-1)
        array.insert(n-1, right_most_element)
        print(" ".join(array))
        break
    print(" ".join(array))
    i -= 1
