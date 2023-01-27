# QUESTION URL: https://www.hackerrank.com/challenges/insertionsort1/problem
# STATUS: Wrong Answer

n = int(input())
array = input().split(" ")
right_most_element = array[n-1]
i = n-2
while True:
    if array[i] > right_most_element:
        array.insert(n-1, array[i])
        n -= 1
        array.pop(n + 1)
        if i == 0:
            array.pop(n - 1)
            array.insert(n - 1, right_most_element)
            print(" ".join(array))
            break
    else:
        array.pop(n-1)
        array.insert(n-1, right_most_element)
        print(" ".join(array))
        break
    print(" ".join(array))
    i -= 1
