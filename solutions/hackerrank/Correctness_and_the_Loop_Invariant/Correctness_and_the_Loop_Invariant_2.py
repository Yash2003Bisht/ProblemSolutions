# QUESTION URL: https://www.hackerrank.com/challenges/correctness-invariant/problem
# STATUS: Accepted



def insertion_sort(l):
    l.sort()
    return l

m = int(input().strip())
ar = [int(i) for i in input().strip().split()]
insertion_sort(ar)
print(" ".join(map(str,ar)))
