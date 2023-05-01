# DATE: 01/05/2023, 08:17:38
# PROBLEM NAME: Forgotten Language
# PROBLEM URL: https://www.codechef.com/problems/FRGTNLNG
# PROBLEM DIFFICULTY RATTING: 1329
# STATUS: accepted
# TIME: 0.05
# MEMORY: 9.7M

for _ in range(int(input())):
    n, k = map(int, input().split())
    n_words = input().split()
    k_words = []

    for __ in range(k):
        k_words.append(input().split()[1:])
    
    k_words = sum(k_words, [])

    for word in n_words:
        if word in k_words:
            print("YES", end=" ")
        else:
            print("NO", end=" ")
    
    print()


