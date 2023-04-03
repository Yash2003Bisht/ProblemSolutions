# DATE: 03/04/2023, 08:04:52
# PROBLEM NAME: Prefix Permutation
# PROBLEM URL: https://www.codechef.com/problems/SUMPERM
# PROBLEM DIFFICULTY RATTING: 1289
# STATUS: accepted
# TIME: 0.04
# MEMORY: 10M

for _ in range(int(input())):
    n = int(input())

    if n%2 != 0:
        print(-1)

    else:
        lst = list(range(1, n+1))
        last_value = 2
        flag = True

        for i in range(1, n+1):
            if i <= 2:
                print(i, end=" ")

            elif last_value == 2:
                last_value = 4
                print(last_value, end=" ")

            elif flag:
                last_value -= 1
                print(last_value, end=" ")
                flag = False

            elif not flag:
                last_value += 3
                print(last_value, end=" ")
                flag = True

        print()


