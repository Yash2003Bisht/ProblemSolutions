# DATE: 18/10/2023, 07:53:23
# PROBLEM NAME: Correct Sentence
# PROBLEM URL: https://www.codechef.com/problems/CORTSENT
# PROBLEM DIFFICULTY RATTING: 1485
# STATUS: wrong answer
# TIME: 0.04
# MEMORY: 9.5M

for _ in range(int(input())):
    all_input_arr = input().split()
    k = all_input_arr[0]
    s = all_input_arr[1:]
    lang_1 = ['a', 'm']
    lang_2 = ['N', 'Z']

    for i in s:
        occ_1 = lang_1.count(i)
        occ_2 = lang_2.count(i)

        if occ_1 > 0 and occ_2 > 0:
            print("NO")
            break
    else:
        print("YES")


