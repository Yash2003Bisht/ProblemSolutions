# DATE: 05/02/2024, 07:05:11
# PROBLEM NAME: Chef and Happy String 
# PROBLEM URL: https://www.codechef.com/problems/HAPPYSTR
# PROBLEM DIFFICULTY RATTING: 956
# STATUS: accepted
# TIME: 0.06
# MEMORY: 8.9M

t = int(input())
vowels = ['a', 'e', 'i', 'o', 'u']

while t > 0:
    s = input()
    n = len(s)
    counter = 0

    for i in range(n):
        if s[i] in vowels:
            counter = 1

            for j in range(i+1, n):
                if s[j] not in vowels:
                    break
                else:
                    counter += 1
                
                if counter > 2:
                    break
            
        if counter > 2:
            print("Happy")
            break
    else:
        print("Sad")

    t -= 1


