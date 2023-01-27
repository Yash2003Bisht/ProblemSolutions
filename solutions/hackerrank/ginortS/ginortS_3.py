# QUESTION URL: https://www.hackerrank.com/challenges/ginorts/problem
# STATUS: Accepted

s = input()
even = ""
odd = ""
upperAlphabets = ""
lowerAlphabets = ""

for i in s:
    if i.isdigit():
        if int(i)%2 == 0:
            even += i
        else:
            odd += i
    elif i.upper() == i:
        upperAlphabets += i
    elif i.lower() == i:
        lowerAlphabets += i

new_s = "".join(sorted(lowerAlphabets)) + "".join(sorted(upperAlphabets)) + "".join(sorted(odd)) + "".join(sorted(even))

print(new_s)
