# QUESTION URL: https://www.hackerrank.com/challenges/default-arguments/problem
# STATUS: Wrong Answer



def print_from_stream(n, stream=EvenStream()):
    for _ in range(n+1):
        print(stream.get_next())

