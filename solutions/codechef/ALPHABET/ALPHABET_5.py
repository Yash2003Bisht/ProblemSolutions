# QUESTION URL: https://www.codechef.com/problems/ALPHABET
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

