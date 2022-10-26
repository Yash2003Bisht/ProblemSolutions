# QUESTION URL: https://www.codechef.com/problems/ENDSORTED

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    if p[0] == 1 and p[n-1] == max(p):
        print(0)
    else:
        first = p.index(1)
        last = n - p.index(max(p)) - 1
        if first < last or last == 0:
            print(first+last)
        else:
            print(first+last-1)

