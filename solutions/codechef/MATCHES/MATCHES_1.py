# DATE: 02/08/2022, 07:31:45
# PROBLEM NAME: Playing with Matches
# PROBLEM URL: https://www.codechef.com/problems/MATCHES
# PROBLEM DIFFICULTY RATTING: 986
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

matches = {
    '0': 6,
    '1': 2,
    '2': 5,
    '3': 5,
    '4': 4,
    '5': 5,
    '6': 6,
    '7': 3,
    '8': 7,
    '9': 6
}

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    total = a + b
    total_matches = 0
    for i in str(total):
        total_matches += matches[i]
    print(total_matches)

