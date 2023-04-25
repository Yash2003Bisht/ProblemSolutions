# DATE: 25/04/2023, 07:35:15
# PROBLEM NAME: Make them Zero
# PROBLEM URL: https://www.codechef.com/problems/MAKEZERO
# PROBLEM DIFFICULTY RATTING: 1320
# STATUS: accepted
# TIME: 0.59
# MEMORY: 21.3M

def get_next_power(num):
    n = 0
    power = pow(2, n)
    while power < num:
        n += 1
        power = pow(2, n)

    if power > num:
        return power // 2

    return power


for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    count = 0

    while sum(arr) != 0:
        max_value = max(arr)
        num = get_next_power(max_value)
        arr = list(map(lambda x: x-num if x >= num else x, arr))
        count += 1

    print(count)


