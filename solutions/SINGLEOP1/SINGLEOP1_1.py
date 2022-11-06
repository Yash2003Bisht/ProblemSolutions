# QUESTION URL: https://www.codechef.com/problems/SINGLEOP1
# STATUS: accepted

for _ in range(int(input())):
    s = int(input())
    s_b = input()
    for i in range(1, s+1):
        if s_b[i-1] == '0':
            i -= 1
            break

    print(i)

