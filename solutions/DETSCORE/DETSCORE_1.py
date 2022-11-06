# QUESTION URL: https://www.codechef.com/problems/DETSCORE
# STATUS: accepted

for _ in range(int(input())):
    x, n = map(int, input().split(" "))
    each_case_marks = x//10
    print(n*each_case_marks)

