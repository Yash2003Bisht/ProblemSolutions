# QUESTION URL: https://www.hackerrank.com/challenges/big-sorting/problem
# STATUS: Terminated due to timeout

unsorted = []

for _ in range(int(input())):
    unsorted.append(int(input()))

unsorted.sort()
sorted_list = list(map(str, unsorted))
print("\n".join(sorted_list))
