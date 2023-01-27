# QUESTION URL: https://www.hackerrank.com/challenges/piling-up/problem
# STATUS: Accepted

for _ in range(int(input())):
    n = int(input())
    n_lst = list(map(int, input().split(' ')))

    vertical_lst = []
    for i in range((len(n_lst)//2)+1):
        max_r_l = max(n_lst[i], n_lst[len(n_lst)-i-1])
        vertical_lst.append(max_r_l)

    sorted_lst = sorted(vertical_lst, reverse=True)
    if vertical_lst == sorted_lst:
        print("Yes")
    else:
        print("No")

