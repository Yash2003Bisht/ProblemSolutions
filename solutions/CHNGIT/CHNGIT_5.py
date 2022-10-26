# QUESTION URL: https://www.codechef.com/problems/CHNGIT

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    lst = list(map(int, input().split()))
    most_common = Counter(lst).most_common()[0][0]
    
    print(n - lst.count(most_common))

