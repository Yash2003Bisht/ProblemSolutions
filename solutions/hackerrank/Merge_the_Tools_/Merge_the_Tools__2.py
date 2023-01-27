# QUESTION URL: https://www.hackerrank.com/challenges/merge-the-tools/problem
# STATUS: Wrong Answer

def merge_the_tools(string, k):
    # your code goes here
    substring_number = len(string)//k
    start = 0
    for _ in range(substring_number):
        counted = ''
        for i in string[start:k]:
            if i not in counted:
                print(i,end="")
                counted += i
        print()
        start, k = k, k+k

