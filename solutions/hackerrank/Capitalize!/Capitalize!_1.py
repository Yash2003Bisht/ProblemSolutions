# QUESTION URL: https://www.hackerrank.com/challenges/capitalize/problem
# STATUS: Accepted



# Complete the solve function below.
def solve(s):
    full_name = s.split(" ")
    cap_s = ""
    for name in full_name:
        cap_s += f"{name.capitalize()} "
    return cap_s


