# DATE: 13/12/2022, 06:10:14
# PROBLEM NAME: Studying Alphabet
# PROBLEM URL: https://www.codechef.com/problems/ALPHABET
# PROBLEM DIFFICULTY RATTING: 1123
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

s = input()
n = int(input())

for _ in range(n):
    w = input()
    
    if all(map(lambda x: x in s, w)):
        print("Yes")
    else:
        print("No")

