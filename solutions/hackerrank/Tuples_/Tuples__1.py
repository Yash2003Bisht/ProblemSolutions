# QUESTION URL: https://www.hackerrank.com/challenges/python-tuples/problem
# STATUS: Accepted

if __name__ == '__main__':
    n = int(raw_input())
    integer_list = map(int, raw_input().split())
    integer_list = tuple(integer_list)
    print hash(integer_list)
