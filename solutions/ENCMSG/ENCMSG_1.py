# QUESTION URL: https://www.codechef.com/problems/ENCMSG

from string import ascii_lowercase


def encoded_string(n, s, ascii_lowercase_reversed):
    swapped_s = ''
    counter = 0
    while n > 0:
        if n == 1:
            swapped_s += ascii_lowercase_reversed[ascii_lowercase.index(s[len(s)-1])]
            break
        swapped_s += ascii_lowercase_reversed[ascii_lowercase.index(s[counter+1])]
        swapped_s += ascii_lowercase_reversed[ascii_lowercase.index(s[counter])]
        counter += 2
        n -= 2
    return swapped_s


for _ in range(int(input())):
    n = int(input())
    s = input()
    encoded_message = encoded_string(n, s, ascii_lowercase[::-1])
    print(encoded_message)


