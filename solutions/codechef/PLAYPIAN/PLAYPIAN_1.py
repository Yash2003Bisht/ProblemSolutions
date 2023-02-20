# DATE: 03/08/2022, 08:02:34
# PROBLEM NAME: Play Piano
# PROBLEM URL: https://www.codechef.com/problems/PLAYPIAN
# PROBLEM DIFFICULTY RATTING: 980
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.2M

for _ in range(int(input())):
    entries = input()

    if len(set(entries)) == 1:
        print('no')

    else:
        next_turn = 'A' if entries[0] == 'B' else 'B'
        for i in range(1, len(entries)):
            if next_turn != entries[i]:
                print('no')
                break

            if i % 2 != 0 and len(entries)-1 > i:
                next_turn = entries[i+1]
            else:
                next_turn = 'A' if entries[i] == 'B' else 'B'

        else:
            print('yes')




