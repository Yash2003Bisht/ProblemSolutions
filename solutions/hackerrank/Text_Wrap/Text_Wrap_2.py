# QUESTION URL: https://www.hackerrank.com/challenges/text-wrap/problem
# STATUS: Accepted



def wrap(string, max_width):
    para = textwrap.wrap(string, width=max_width)
    return "\n".join(para)

