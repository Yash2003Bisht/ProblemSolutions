# QUESTION URL: https://www.codechef.com/problems/LAPTOPREC

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    most_common = list(a.most_common()[0])
    repeats = [value for _, value in a.items()]
    if repeats.count(most_common[1]) > 1:
        print("CONFUSED")
    else:
        print(most_common[0])

