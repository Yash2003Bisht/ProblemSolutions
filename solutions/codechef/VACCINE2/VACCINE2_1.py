# QUESTION URL: https://www.codechef.com/problems/VACCINE2
# STATUS: accepted
# TIME: 0.03
# MEMORY: 10.3M

for _ in range(int(input())):
    n, d = map(int, input().split())
    a = list(map(int, input().split()))

    risk = sum([1 for age in a if age >= 80 or age <= 9])
    not_risk = n - risk

    total = (risk // d if risk%d == 0 else (risk // d) + 1) \
            + (not_risk // d if not_risk%d == 0 else (not_risk // d) + 1)

    print(total)

