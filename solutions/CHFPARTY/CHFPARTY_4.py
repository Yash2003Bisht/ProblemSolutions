# QUESTION URL: https://www.codechef.com/problems/CHFPARTY
# STATUS: accepted
# TIME: 3.31
# MEMORY: 25.1M

import sys

def heapify(arr, n, i):
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2

    if l < n and arr[i] < arr[l]:
        largest = l

    if r < n and arr[largest] < arr[r]:
        largest = r
  
    if largest != i:
        (arr[i], arr[largest]) = (arr[largest], arr[i])  # swap

        heapify(arr, n, largest)
  
def heapSort(arr):
    n = len(arr)
  
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    for i in range(n - 1, 0, -1):
        (arr[i], arr[0]) = (arr[0], arr[i])
        heapify(arr, i, 0)
  
  

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    heapSort(a)
    total = 0

    for i in a:
        if total >= i:
            total += 1
        else:
            break

    sys.stdout.write(str(total) + "\n")


