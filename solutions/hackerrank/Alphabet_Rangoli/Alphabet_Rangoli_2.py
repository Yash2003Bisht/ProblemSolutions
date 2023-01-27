# QUESTION URL: https://www.hackerrank.com/challenges/alphabet-rangoli/problem
# STATUS: Wrong Answer

import string

abc = string.ascii_lowercase

def print_rangoli(size):
    # your code goes here
    lst = []
    var = ''
    for i in range(size-1, -1, -1):
        lst.append(f"{var}{abc[i]}{var[::-1]}".center(((n-1)*4)+1, '-'))
        var += f'{abc[i]}-'

    print('\n'.join(lst[0:size-1]) + '\n' + '\n'.join(lst[::-1]))



