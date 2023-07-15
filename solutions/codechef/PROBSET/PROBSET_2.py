# DATE: 15/07/2023, 08:38:27
# PROBLEM NAME: Chef and Problem Setting
# PROBLEM URL: https://www.codechef.com/problems/PROBSET
# PROBLEM DIFFICULTY RATTING: 1406
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.4M

for _ in range(int(input())):
    n, m = map(int, input().split())
    test_result = "FINE"

    for __ in range(n):
        test_type, tests = input().split()

        if test_type == 'wrong' and '0' not in tests and test_result != 'INVALID':
            test_result = 'WEAK'
        elif test_type == 'correct' and '0' in tests:
            test_result = 'INVALID'

    print(test_result)


