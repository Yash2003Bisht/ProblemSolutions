# DATE: 04/11/2022, 06:57:04
# PROBLEM NAME: Prime Generator
# PROBLEM URL: https://www.codechef.com/problems/PRIME1
# PROBLEM DIFFICULTY RATTING: 1069
# STATUS: accepted
# TIME: 9.70
# MEMORY: 9.8M

def is_prime(num):
    if num <= 1:
        return False
    elif num == 2:
        return True
    elif num > 2 and num % 2 == 0:
        return False
    for i in range(3, int(num ** 0.5) + 1, 2):
        if num % i == 0:
            return False
    return True


for _ in range(int(input())):
    m, n = map(int, input().split())
    for i in range(m, n + 1):
        if is_prime(i):
            print(i)
    print()


