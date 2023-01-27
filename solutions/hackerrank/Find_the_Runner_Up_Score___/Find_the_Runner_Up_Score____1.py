# QUESTION URL: https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem
# STATUS: Accepted

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = list(arr)
    max_value = max(arr)
    lst = []
    for i in arr:
        if i < max_value:
            lst.append(i)
    print(max(lst))
