# DATE: 27/01/2023, 07:12:01
# PROBLEM NAME: A Good Set
# PROBLEM URL: https://www.codechef.com/problems/GOODSET
# PROBLEM DIFFICULTY RATTING: 1231
# STATUS: accepted
# TIME: 0.32
# MEMORY: 9.5M

def get_next_num(lst, num, size):
    while num <= 500:
        num += 1
        flag = True

        for i in range(size):
            for j in range(i + 1, size):
                if lst[i] + lst[j] == num:
                    flag = False
                    break

            if not flag:
                break

        else:
            return num

    return num


for _ in range(int(input())):
    n = int(input())

    if n == 1:
        print(1)
    elif n == 2:
        print("1 2")
    else:
        lst = [1, 2]
        for _ in range(n-2):
            num = get_next_num(lst, max(lst), len(lst))
            lst.append(num)

        print(" ".join(map(str, lst)))


