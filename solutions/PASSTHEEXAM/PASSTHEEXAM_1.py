# QUESTION URL: https://www.codechef.com/problems/PASSTHEEXAM
# STATUS: accepted

for _ in range(int(input())):
    n, x, y = map(int, input().split(" "))
    print("pass" if sum([n,x,y]) >= 100 and min([n, x, y]) >= 10 else "fail")

