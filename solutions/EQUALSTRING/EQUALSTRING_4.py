# QUESTION URL: https://www.codechef.com/problems/EQUALSTRING
# STATUS: accepted

for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    b_set = {b[i] for i in range(n) if b[i] != a[i]}
    print(len(b_set))

