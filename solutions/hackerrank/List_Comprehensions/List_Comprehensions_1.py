# QUESTION URL: https://www.hackerrank.com/challenges/list-comprehensions/problem
# STATUS: Accepted

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

    lst = [[i, j ,k] for i in range(0,x+1) for j in range(0,y+1) for k in range(0,z+1) if sum([i,j,k]) != n]
    print(lst)
