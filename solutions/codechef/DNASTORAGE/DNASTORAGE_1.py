# DATE: 26/12/2023, 08:59:15
# PROBLEM NAME: DNA Storage
# PROBLEM URL: https://www.codechef.com/problems/DNASTORAGE
# PROBLEM DIFFICULTY RATTING: 801
# STATUS: accepted
# TIME: 0.02
# MEMORY: 8.5M

for _ in range(int(input())):
    n = int(input())
    s = input()
    encoded = []
    i = 0

    while i < n-1:
        if s[i] == '0' and s[i+1] == '0':
            encoded.append('A')
        elif s[i] == '0' and s[i+1] == '1':
            encoded.append('T')
        elif s[i] == '1' and s[i+1] == '0':
            encoded.append('C')
        else:
            encoded.append('G')

        i += 2

    print("".join(encoded))


