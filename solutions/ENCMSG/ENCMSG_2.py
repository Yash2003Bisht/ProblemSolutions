# QUESTION URL: https://www.codechef.com/problems/ENCMSG

from string import ascii_lowercase


def swap(n, s):
    swapped_s = ''
    counter = 0
    while n > 0:
        if n == 1:
            swapped_s += s[len(s)-1]
            break
        swapped_s += (s[counter+1])
        swapped_s += (s[counter])
        counter += 2
        n -= 2
    return swapped_s


def replace(swapped_s, ascii_lowercase_reversed):
    replaced_s = ''
    for character in swapped_s:
        replaced_s += ascii_lowercase_reversed[ascii_lowercase.index(character)]
    return replaced_s


for _ in range(int(input())):
    n = int(input())
    s = input()
    swapped_s = swap(n, s)
    repaced_s = replace(swapped_s, ascii_lowercase[::-1])
    print(repaced_s)


