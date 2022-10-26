# QUESTION URL: https://www.codechef.com/problems/AIRLINE

for i in range(int(input())):
    a, b, c, d, e = map(int, input().split())
    lst = [a, b, c]
    lst.sort(reverse=True)
    carry_bags = list(filter(lambda x: x <= e, [a, b, c]))
    if len(carry_bags) == 0:
        print('NO')
    else:
        print('YES')
