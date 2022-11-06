# QUESTION URL: https://www.codechef.com/problems/MATCHES
# STATUS: accepted

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

