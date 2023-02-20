# DATE: 21/01/2023, 07:53:36
# PROBLEM NAME: Truth and Dare
# PROBLEM URL: https://www.codechef.com/problems/TRUEDARE
# PROBLEM DIFFICULTY RATTING: 1231
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    input()
    t1 = list(map(int, input().split()))
    input()
    d1 = list(map(int, input().split()))

    input()
    t2 = list(map(int, input().split()))
    input()
    d2 = list(map(int, input().split()))

    flag = False

    # check truth task
    for i in t2:
        if i not in t1:
            flag = True
            break

    # check dare task
    if not flag:
        for i in d2:
            if i not in d1:
                flag = True
                break

    if flag:
        print("no")
    else:
        print("yes")


