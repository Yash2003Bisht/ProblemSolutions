# QUESTION URL: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
# STATUS: Accepted

n = int(input())
dict_lst = [input() for _ in range(n)]
dict_ = {}
name = []
try:
    while True:
        name.append(input())

except EOFError:
    for i in dict_lst:
        try:
            var = i.split()
            dict_.update({var[0]: var[1]})

        except IndexError:
            pass

    var = list(dict_.keys())
    for i in range(0, len(name)):
        if dict_.get(name[i]) != None:
            print(f"{name[i]}={dict_.get(name[i])}")
        else:
            print("Not found")
