# QUESTION URL: https://www.hackerrank.com/challenges/text-wrap/problem
# STATUS: Accepted



def wrap(string, max_width):
    para = ''
    for word in textwrap.wrap(string, width=max_width):
        para += word + '\n'
    return para

