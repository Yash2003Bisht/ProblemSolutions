# QUESTION URL: https://www.codechef.com/problems/VACCINE2
# STATUS: accepted
# TIME: 0.03
# MEMORY: 10.3M

for _ in range(int(input())):
    n, d = map(int, input().split())
    a = list(map(int, input().split()))

    risk = len(list(filter(lambda x: x >= 80 or x <= 9, a)))
    not_risk = n - risk

    total = (risk // d if risk%d == 0 else (risk // d) + 1) \
            + (not_risk // d if not_risk%d == 0 else (not_risk // d) + 1)

    print(total)

