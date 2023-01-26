# QUESTION URL: https://www.codechef.com/problems/SPALNUM
# STATUS: accepted
# TIME: 3.43
# MEMORY: 9.5M

for _ in range(int(input())):
    a, b = map(int, input().split())

    print(sum(filter(lambda x: str(x) == str(x)[::-1], range(a, b + 1))))


