# QUESTION URL: https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
# STATUS: Accepted

correct_string = "hackerrank"
for _ in range(int(input())):
    string = input()
    i = 0
    j = 0
    while i != len(string) - 1:
        if string[i] == correct_string[j]:
            j += 1
        if j == 9:
            print("YES")
            break
        i += 1
    else:
        print("NO")
