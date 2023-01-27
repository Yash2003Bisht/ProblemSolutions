# QUESTION URL: https://www.hackerrank.com/challenges/merge-the-tools/problem
# STATUS: Wrong Answer

def merge_the_tools(string, k):
    # your code goes here
    items_len = len(string)//k
    start = 0
    for _ in range(items_len):
        counted = ""
        value = string[start:items_len+start]
        for i in value:
            if i not in counted:
                print(i, end="")
                counted += i
        print()
        start += items_len

