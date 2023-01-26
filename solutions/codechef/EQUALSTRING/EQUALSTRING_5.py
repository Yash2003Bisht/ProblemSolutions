# QUESTION URL: https://www.codechef.com/problems/EQUALSTRING
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    b_set = set()

    for i in range(n):
        if b[i] != a[i]:
            b_set.add(b[i])
            
    print(len(b_set))

