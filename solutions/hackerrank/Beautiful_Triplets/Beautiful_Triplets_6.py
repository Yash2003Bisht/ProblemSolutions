# QUESTION URL: https://www.hackerrank.com/challenges/beautiful-triplets/problem
# STATUS: Terminated due to timeout

n, d = map(int, input().split(" "))
arr = list(map(int, input().split(" ")))
total = 0
for i in range(len(arr)):
    for j in range(i+1, len(arr)):
        for k in range(j+1, len(arr)):
            if arr[i] < arr[j] < arr[k] and arr[j] - arr[i] == arr[k] - arr[j] == d:
                total += 1

print(total)
