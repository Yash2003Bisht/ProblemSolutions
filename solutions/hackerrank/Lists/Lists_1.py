# QUESTION URL: https://www.hackerrank.com/challenges/python-lists/problem
# STATUS: Accepted

if __name__ == '__main__':
    N = int(input())
    lst = []
    for _ in range(N):
        commands = input().split(" ")
        if commands[0] == "append":
            lst.append(int(commands[1]))
        elif commands[0] == "insert":
            lst.insert(int(commands[1]), int(commands[2]))
        elif commands[0] == "print":
            print(lst)
        elif commands[0] == "remove":
            lst.remove(int(commands[1]))
        elif commands[0] == "sort":
            lst.sort()
        elif commands[0] == "pop":
            lst.pop()
        elif commands[0] == "reverse":
            lst.reverse()
