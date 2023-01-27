# QUESTION URL: https://www.hackerrank.com/challenges/funny-string/problem
# STATUS: Accepted

for _ in range(int(input())):
    s = input()
    l1 = [abs(ord(i) - ord(j)) for i, j in zip(s[0::], s[1::])]
    if l1 == l1[::-1]:
        print("Funny")
    else:
        print("Not Funny")
