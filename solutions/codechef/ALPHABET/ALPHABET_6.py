# QUESTION URL: https://www.codechef.com/problems/ALPHABET
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

s = input()
n = int(input())

for _ in range(n):
    w = input()

    for i in w:
        if i not in s:
            print("No")
            break
    else:
        print("Yes")



