# QUESTION URL: https://www.codechef.com/problems/PLAYPIAN
# STATUS: wrong answer

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

            if i % 2 != 0:
                next_turn = entries[i]
            else:
                next_turn = 'A' if entries[i] == 'B' else 'B'

        else:
            print('yes')




